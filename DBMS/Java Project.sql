select * from signup.signupdatabase ;
Alter table signup.signupdatabase drop column phone_no;
Alter table signup.signupdatabase add email varchar(255);
SELECT FirstName, LastName, UserName, email from signup.signupdatabase where UserName = "yash";
truncate table signup.signupdatabase;
SELECT Password from signup.signupdatabase where UserName ="yash"