create database pcpf;
use pcpf;
CREATE TABLE customer(
	username VARCHAR(50),
	email_id VARCHAR(50) NOT NULL UNIQUE,
	password VARCHAR(250) NOT NULL,
	PRIMARY KEY(username)
);

SELECT * FROM CUSTOMER;

