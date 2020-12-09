const mysql = require('mysql');
const express = require('express');
const session = require('express-session');
const bodyParser = require('body-parser');
const bcrypt = require('bcrypt');

//Creating an express app
const app = express();
app.use(session({
    secret: 'secret',
    resave: true,
    saveUninitialized: true
}));

//To display static elements like css and images
app.use( express.static( "Resources" ) );

//To parse incomming request
app.use(bodyParser.urlencoded({extended : true}));
app.use(bodyParser.json());

//connection to database
const connection = mysql.createConnection({
	host     : 'localhost',
	user     : 'root',
	password : 'root',
    database : 'pcpf',
    port : 3306
}); 

//Generate salt
const salt = bcrypt.genSaltSync(10);

//GET request for login page
app.get('/', function(_request, response) {
    response.sendFile(__dirname + '/Resources/login.html');
});

//GET request for registration page
app.get('/register', function(_request, response){
    response.sendFile(__dirname + '/Resources/register.html');
});
//GET request for home page
app.get('/home', function(request, response) {
    //If logged in then display home page
    if (request.session.loggedin) {
        response.sendFile(__dirname + '/Resources/home.html');
    } 
    else {
        response.send('Please login to view this page!');
    }
});
  
//POST Response to login of user
app.post('/auth', function(request, response) {
    const username = request.body.username;
    const password = request.body.password;
    if (username && password) {
        connection.query('SELECT username,password FROM customer WHERE username = ?', [username, password], function(error, results, _fields) {
            if (error) {
                console.log(error);
                response.send(error);
            }
            else {
                if (results.length > 0) {
                    //Comparing password with hashed password
                const isValidPass = bcrypt.compareSync(password, results[0].password);
                if (isValidPass) {
                    request.session.loggedin = true;
                    //request.session.username = username;
                    response.redirect('/home');
                }
                else {
                    response.send('Incorrect Username and/or Password!');
                }	
            } 		
            response.end();
            }
        }
        );
    } else {
        response.send('Please enter Username and Password!');
        response.end();
    }
});

//POST response for registration of user
app.post('/update', function(request, response){
    
    const email = request.body.email; 
    const username = request.body.username;
    const password = request.body.password;
    const password1 = request.body.password1;

    if (email && username && password && password1) {
        if (password == password1) {
            //Hashing the password before inserting into database
            const encryptedPassword =   bcrypt.hashSync(password, salt)
            connection.query('INSERT INTO customer VALUES (?,?,?)', [username,email,encryptedPassword], function(error, _results, _fields){
                if (error) {
                    console.log(error);
                    response.send(error);
                }
                else{
                    response.redirect('/');
                    response.end();
                } 
            });
        }
        else{
            response.send('Please Confirm your password!');
            response.end();
        }
    }
    else {
        response.send('Please enter all the details');
        response.end();
    }
});

//Starting Express server at port 3000
app.listen(3000, function() {
    console.log("Server is running on port 3000")
});