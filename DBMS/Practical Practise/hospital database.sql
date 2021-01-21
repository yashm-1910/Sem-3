CREATE DATABASE hos;
USE HOS;
CREATE TABLE patient(
	patient_id varchar(20) PRIMARY KEY,
    fname varchar(50) NOT NULL,
    lname varchar(50),
    sex varchar (10),
    address varchar(150) NOT NULL,
    age int,
    contact bigint NOT NULL
);

CREATE TABLE staff(
	employee_id varchar(20) PRIMARY KEY,
    fname varchar(50) NOT NULL,
    lname varchar(50),
    address varchar(150) NOT NULL,
    contact bigint UNIQUE NOT NULL,
    qualification  varchar(20),
    exp int,
    salary float,
    job_discription varchar(20)
);

INSERT INTO staff VALUES("emp1","VINCENT","CHARLES","101, MG ROAD",1234567890,"MD",8,15000,"DOCTOR");
INSERT INTO staff VALUES("emp2","MARY","ANNE","102, MG ROAD",9876543210,"B.Sc",4,8000,"NURSE");
INSERT INTO staff VALUES("emp3","JANE","DOE","103, MG ROAD",0192837450,"B.COM",2,1000,"RECEPTIONIST");
INSERT INTO staff VALUES("emp4","JOSEPH","DOE","104, MG ROAD",1029384756,"B.Sc",6,6000,"ATTENDENT");

INSERT INTO patient VALUES("p1","John","Geller","Male","105, LT Road",25,1020304050);
INSERT INTO patient VALUES("p2","Rachel","Greene","Female","104, LT Road",25,0192837412);
INSERT INTO patient VALUES("p3","Sheldon","Cooper","Male","101, LT Road",25,9876544567);

SELECT * FROM staff;
SELECT * FROM patient;

SELECT employee_id,fname, lname, salary 
FROM staff 
WHERE salary >=1000 AND salary <=10000;

ALTER TABLE staff DROP exp;


CREATE TABLE flight(
	flight_no varchar(20) PRIMARY KEY,
    airline_name varchar(20),
	source varchar(20),
    destination varchar(20),
    days_of_operation varchar(20)
);

CREATE TABLE customer(
	customer_id varchar(20) PRIMARY KEY,
    customer_name varchar(20),
	email_id varchar(50),
    telephone bigint,
    address varchar(250),
    flight_no varchar(20),
    FOREIGN KEY (flight_no) REFERENCES flight(flight_no)
);

INSERT INTO FLIGHT VALUES("100","AIR INDIA","MUMBAI","DELHI","MONDAY");
INSERT INTO FLIGHT VALUES("101","AIR INDIA","MUMBAI","CHENNAI","TUESDAY");
INSERT INTO FLIGHT VALUES("102","AIR INDIA","MUMBAI","JAIPUR","WEDNESDAY");

INSERT INTO CUSTOMER VALUES("1","VINCENT CHARLES","vincent@email.com","0123456789","101 Park Avenue","100");
INSERT INTO CUSTOMER VALUES("2","Ross Geller","ross@email.com","9876543210","102 Park Avenue","100");
INSERT INTO CUSTOMER VALUES("3","John Snow","john@email.com","9182736450","103 Park Avenue","100");
INSERT INTO CUSTOMER VALUES("4","Bear Grylls","bear@email.com","8912345670","104 Park Avenue","101");
INSERT INTO CUSTOMER VALUES("5","Joseph CHARLES","joseph@email.com","8127364590","105 Park Avenue","101");

SELECT CUSTOMER.CUSTOMER_ID, CUSTOMER.CUSTOMER_NAME
FROM CUSTOMER 
INNER JOIN FLIGHT ON 
CUSTOMER.FLIGHT_NO = FLIGHT.FLIGHT_NO
WHERE FLIGHT.days_of_operation ="MONDAY";

SELECT CUSTOMER.CUSTOMER_ID, CUSTOMER.CUSTOMER_NAME
FROM CUSTOMER 
INNER JOIN FLIGHT ON 
CUSTOMER.FLIGHT_NO = FLIGHT.FLIGHT_NO
WHERE FLIGHT.FLIGHT_NO ="101";

select * 
from customer
where flight_no in (Select flight_no from flight where days_of_operation = 'MONDAY');

select customer.customer_name, flight.flight_no
from customer, flight
where flight.days_of_operation='MONDAY' AND customer.flight_no	= flight.flight_no;
