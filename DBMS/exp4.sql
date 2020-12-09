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