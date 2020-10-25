CREATE DATABASE College;

CREATE TABLE College.User(
	
	account_id VARCHAR(20),
	user_name VARCHAR(20),
	fname VARCHAR(20) NOT NULL,
	lname VARCHAR(20),
	email_id VARCHAR(30) NOT NULL UNIQUE,
	password VARCHAR(20) NOT NULL,
	phone_no BIGINT UNIQUE,
	activity_stats BOOLEAN,
	age INT,
	DOB DATE,
	CONSTRAINT PK_User PRIMARY KEY(account_id,user_name)
);

CREATE TABLE College.Device(
	device_id VARCHAR(20),
	device_type VARCHAR(15),
	user_id VARCHAR(20),
	PRIMARY KEY (device_id),
	FOREIGN KEY (user_id) REFERENCES User(account_id)
);

CREATE TABLE College.Contact(
	
	account_id VARCHAR(20),
	user_name VARCHAR(20),
	fname VARCHAR(20) NOT NULL,
	lname VARCHAR(20),
	email_id VARCHAR(30) NOT NULL UNIQUE,
	phone_no BIGINT UNIQUE,
	activity_stats BOOLEAN,
	contact VARCHAR	(20),
	CONSTRAINT PK_Contact PRIMARY KEY(account_id,user_name),
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
	FOREIGN KEY (sender_id) REFERENCES User(account_id),
	FOREIGN KEY (reciever_id) REFERENCES Contact(account_id)
);

CREATE TABLE College.Offender(
	
	account_id VARCHAR(20),
	user_name VARCHAR(20),
	fname VARCHAR(20) NOT NULL,
	lname VARCHAR(20),
	email_id VARCHAR(30) NOT NULL UNIQUE,
	phone_no BIGINT UNIQUE,
	send_date DATETIME,
	blocked_by VARCHAR(20),
	CONSTRAINT PK_Offender PRIMARY KEY(account_id,user_name),
	FOREIGN KEY (blocked_by) REFERENCES User(account_id)
);

