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

delimiter $$
CREATE TRIGGER  college.Check_age  BEFORE INSERT 
ON college.user 
FOR EACH ROW
BEGIN
IF NEW.age < 15 THEN
SIGNAL SQLSTATE '45000'
SET MESSAGE_TEXT = 'ERROR: AGE MUST BE ATLEAST 15 YEARS!';
END IF;
END; $$
delimiter;

INSERT INTO college.user VALUES ("user_7","user7", "name7","user7@email.com","user1234",9035709124,true,14,'2006-09-11'); 
INSERT INTO college.user VALUES ("user_7","user7", "name7","user7@email.com","user1234",9035709124,true,20,'2000-09-11');

CREATE VIEW ACTIVE_USERS AS
SELECT user_name, email_id 
FROM College.user
WHERE activity_stats = 1;

SELECT * FROM ACTIVE_USERS;

CREATE VIEW PC_USERS AS
SELECT device_id, user_id 
FROM College.device
WHERE device_type = "PC-Windows";

SELECT * FROM PC_USERS;