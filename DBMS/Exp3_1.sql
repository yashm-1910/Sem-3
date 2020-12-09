
CREATE DATABASE College;

CREATE TABLE College.User(
	
	user_name VARCHAR(20),
	fname VARCHAR(20) NOT NULL,
	lname VARCHAR(20),
	email_id VARCHAR(30) NOT NULL UNIQUE,
	password VARCHAR(20) NOT NULL,
	phone_no BIGINT UNIQUE,
	activity_stats BOOLEAN,
	age INT,
	DOB DATE,
	PRIMARY KEY(user_name)
);

CREATE TABLE College.Device(
	device_id VARCHAR(20),
	device_type VARCHAR(15),
	user_id VARCHAR(20),
	PRIMARY KEY (device_id),
	FOREIGN KEY (user_id) REFERENCES User(user_name)
);

CREATE TABLE College.Contact(
	
	user_name VARCHAR(20),
	fname VARCHAR(20) NOT NULL,
	lname VARCHAR(20),
	email_id VARCHAR(30) NOT NULL UNIQUE,
	phone_no BIGINT UNIQUE,
	activity_stats BOOLEAN,
	contact VARCHAR	(20),
	PRIMARY KEY(user_name),
	FOREIGN KEY (contact) REFERENCES User(user_name)
);

CREATE TABLE College.Message(
	
	message_id VARCHAR(20),
	sender_id VARCHAR(20),
	reciever_id VARCHAR(20),
	fname VARCHAR(20) NOT NULL,
	send_date DATETIME,
	content VARCHAR	(200),
	PRIMARY KEY(message_id),
	FOREIGN KEY (sender_id) REFERENCES User(user_name),
	FOREIGN KEY (reciever_id) REFERENCES Contact(user_name)
);

CREATE TABLE College.Offender(
	
	user_name VARCHAR(20),
	fname VARCHAR(20) NOT NULL,
	lname VARCHAR(20),
	email_id VARCHAR(30) NOT NULL UNIQUE,
	phone_no BIGINT UNIQUE,
	send_date DATETIME,
	blocked_by VARCHAR(20),
	PRIMARY KEY(user_name),
	FOREIGN KEY (blocked_by) REFERENCES User(user_name)
);

INSERT INTO college.user VALUES ("user_1","user", "name","user@email.com","user1234",9123456780,true,20,'2000-01-01');
INSERT INTO college.user VALUES (null,null, "name",null,"user1234",9123456780,true,20,'2000-01-01');
INSERT INTO college.user VALUES ("user_2","user1", "name1","user@email.com","user1234",9123456780,true,20,'2001-04-11');
SELECT * FROM college.user;


INSERT INTO college.user VALUES ("user_1","user", "name","user@email.com","user1234",9123456780,true,20,'2000-01-01');
INSERT INTO college.user VALUES ("user_2","user2", "name2","user2@email.com","user1234",9475381305,true,19,'2001-04-11');
INSERT INTO college.user VALUES ("user_3","user3", "name3","user3@email.com","user1234",9475381306,true,21,'2000-04-11');
INSERT INTO college.user VALUES ("user_4","user4", "name4","user4@email.com","user1234",9043642028,true,17,'2003-04-11');
INSERT INTO college.user VALUES ("user_5","user5", "name5","user5@email.com","user1234",9015004314,true,16,'2004-04-11');
INSERT INTO college.user VALUES ("user_6","user6", "name6","user6@email.com","user1234",9034006814,true,15,'2005-09-11');
INSERT INTO college.user VALUES ("user_7","user7", "name7","user7@email.com","user1234",9035709124,true,20,'2000-09-11');

UPDATE College.user 
SET phone_no = 8137403130, age = 18, DOB = '2002-04-11'
WHERE user_name = "user_3";

UPDATE College.user 
SET DOB = '2004-10-11'
WHERE user_name = "user_5";

UPDATE College.user 
SET DOB = '2003-06-11'
WHERE user_name = "user_4"; 

UPDATE College.user 
SET DOB = '2001-03-11'
WHERE user_name = "user_2";

INSERT INTO college.device VALUES ("AXA1234","Mobile-Android", "user_1");
INSERT INTO college.device VALUES ("M63A43B","Mobile-IOS", "user_2");
INSERT INTO college.device VALUES ("WCL1454","PC-Windows", "user_3");
INSERT INTO college.device VALUES ("MCB2345","PC-Ubuntu", "user_4");
INSERT INTO college.device VALUES ("LSQ6432","PC-MacOS", "user_5");
INSERT INTO college.device VALUES ("BAS1245","PC-Windows", "user_6");
INSERT INTO college.device VALUES ("XMP3464","Mobile-iPadOS", "user_7");

INSERT INTO college.device VALUES ("BAS1245","PC-Windows", "user_1");
INSERT INTO college.device VALUES ("XMP3464","Mobile-iPadOS", "user_2");

SELECT * FROM College.device;

DELETE FROM College.device WHERE user_id = "user_6";
DELETE FROM College.device WHERE user_id = "user_7";

DELETE FROM College.user WHERE user_name = "user_6";
DELETE FROM College.user WHERE user_name = "user_7";

SELECT MIN(age) AS min_age 
FROM College.user;

SELECT MAX(age) AS max_age 
FROM College.user;

SELECT COUNT(user_name) AS user_count 
FROM College.user;

SELECT SUM(age) AS sum_age
FROM College.user;

SELECT AVG(age) AS avg_age
FROM College.user;


INSERT INTO college.contact VALUES ("user_7","user7", "name7","user7@email.com",9035709124,true,"user_1");
INSERT INTO college.contact VALUES ("user_1","user1", "name1","user1@email.com",9123456780,true,"user_2");
INSERT INTO college.contact VALUES ("user_3","user3", "name3","user3@email.com",9475381306,true,"user_4");
INSERT INTO college.contact VALUES ("user_5","user5", "name5","user5@email.com",9015004314,true,"user_3");
INSERT INTO college.contact VALUES ("user_2","user2", "name2","user2@email.com",9475381305,true,"user_5");

SELECT * FROM college.contact;



describe College.message;

ALTER TABLE College.message 
DROP fname;

ALTER TABLE College.message 
MODIFY COLUMN  send_date DATE;

INSERT INTO college.message VALUES ("MSG1001","user_1","user_2",'2020-11-11',"Hello, how are you");
INSERT INTO college.message VALUES ("MSG1002","user_2","user_1",'2020-11-11',"I'm fine, how are you");
INSERT INTO college.message VALUES ("MSG1003","user_1","user_3",'2020-11-12',"Hello user_3");
INSERT INTO college.message VALUES ("MSG1004","user_3","user_2",'2020-11-13',"Good Morning");
INSERT INTO college.message VALUES ("MSG1005","user_4","user_7",'2020-11-11',"Hello, how are you");
INSERT INTO college.message VALUES ("MSG1006","user_1","user_5",'2020-11-09',"Hello, how are you");

SELECT * FROM college.message;

ALTER TABLE College.offender
MODIFY COLUMN  send_date DATE;

SELECT college.device.device_id, college.device.device_type, college.user.fname, college.user.email_id 
FROM college.device  
INNER JOIN college.user ON college.device.user_id = college.user.user_name 
ORDER BY college.user.fname;

SELECT college.message.message_id, college.user.fname, college.user.email_id , college.message.reciever_id, college.message.send_date, college.message.content
FROM college.message  
LEFT JOIN college.user ON college.message.sender_id = college.user.user_name 
ORDER BY college.user.fname;

SELECT college.message.message_id, college.user.fname, college.user.email_id , college.message.reciever_id, college.message.send_date, college.message.content
FROM college.message  
RIGHT JOIN college.user ON college.message.sender_id = college.user.user_name 
ORDER BY college.user.fname;

SELECT A.sender_id AS SENDER1, B.sender_id AS SENDER2, A.content, A.send_date
FROM College.message A, College.message B
WHERE A.sender_id <> B.sender_id
AND A.reciever_id = B.reciever_id
ORDER BY A.send_date;

INSERT INTO college.user VALUES ("user_7","user7", "name7","user7@email.com","user1234",9035709124,true,20,'2000-09-11'); 
INSERT INTO college.user VALUES ("user_7","user7", "name7","user7@email.com","user1234",9035709124,true,20,'2000-09-11');

CREATE VIEW ACTIVE_USERS AS
SELECT user_name, email_id 
FROM College.user
WHERE activity_stats = 1;

SELECT * FROM ACTIVE_USERS;

DROP VIEW ACTIVE_USERS;

CREATE VIEW PC_USERS AS
SELECT device_id, user_id 
FROM College.device
WHERE device_type = "PC-Windows";

SELECT * FROM PC_USERS;

SELECT * FROM College.user;

SELECT DISTINCT device_type FROM College.device;

SELECT content FROM College.message;

SELECT fname, email_id FROM College.user 
WHERE age>16 AND activity_stats = 1;

SELECT * FROM College.device
WHERE device_type LIKE '%PC-Windows%';

SELECT COUNT(device_id), device_type
FROM college.device
GROUP BY device_type;

SELECT COUNT(device_id), device_type
FROM college.device
GROUP BY device_type
HAVING COUNT(device_id)>=1;

SELECT * FROM College.user
ORDER BY DOB;

SELECT * FROM College.user wHERE email_id
IN( SELECT email_id FROM college.user WHERE age>16);

WITH RECURSIVE message_send(sender_id, reciever_id, content) AS (
	SELECT sender_id, reciever_id, content
	FROM College.message
UNION
	SELECT message_send.sender_id, message_send.reciever_id, message_send.content
    FROM message_send, message
    WHERE message_send.sender_id = message.reciever_id
)
SELECT *
FROM message_send;

CALL display_users();


