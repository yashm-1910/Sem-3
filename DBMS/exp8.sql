--Creating a database;
create database sample;
use sample;

--creating a table;
create table student(id int primary key, name varchar(20), age int);

insert into student values(1,'ram',20);
insert into student values(2,'sam',20);
insert into student values(3,'seema',20);
insert into student values(4,'reema',20);

select * from student;
show tables;

--creating user1 and granting access;
create user 'user1'@'localhost' identified by 'user1';
grant all privileges on *.* to 'user1'@'localhost';

--creating user2 and granting insert access;
create user 'user2'@'localhost' identified by 'user2';
grant insert on sample.student to 'user2'@'localhost';

--showing grants of each user;
show grants for 'user1'@'localhost';
show grants for 'user2'@'localhost';

--To test insert on student by user2;
insert into sample.student values(5,'ruby',20);
select * from sample.student;


select user from mysql.user;
select * from student;

--Revoking grants on user2
revoke insert on sample.student from 'user2'@'localhost';
select user from mysql.user;
show grants for 'user2'@'localhost';

--deleting user2;
delete from mysql.user where user = 'user2';
select user from mysql.user;


