CREATE DATABASE hotel;
USE hotel;

CREATE TABLE staff(
	staff_id varchar(20) PRIMARY KEY,
    staff_name varchar(50),
    address varchar(50),
    contact bigint UNIQUE,
    qualification varchar(50),
    salary int
);

CREATE TABLE customer(
	customer_id varchar(20) PRIMARY KEY,
    fname varchar(50),
    lname varchar(50),
    address varchar(50),
    contact bigint UNIQUE,
    room_no int UNIQUE,
    room_type varchar(50),
    bill int
);

INSERT INTO staff VALUES("1","VINCENT CHARLES", "101 PARK AVENUE",1234567890,"HSC",10000);
INSERT INTO staff VALUES("2","ROSS GELLER", "102 PARK AVENUE",9087654321,"BA",25000);
INSERT INTO staff VALUES("3","JOSEPH GREEN", "103 PARK AVENUE",8901234567,"BA",25000);
INSERT INTO staff VALUES("4","MISTY GREEN", "104 PARK AVENUE",8932234567,"BA",35000);

SELECT * FROM staff;

INSERT INTO customer VALUES("1","VINCENT", "CHARLES", "101 PARK AVENUE",1234567890,101,"AC",1000);
INSERT INTO customer VALUES("2","ROSS", "GELLER", "102 PARK AVENUE",9087654321,102,"AC",2000);
INSERT INTO customer VALUES("3","JOSEPH", "GREEN", "103 PARK AVENUE",8901234567,103,"NON AC",1500);

SELECT * FROM customer;

CREATE TABLE attends(
	staff_id varchar(20),
    customer_id varchar(20),
    PRIMARY KEY (staff_id,customer_id),
    foreign key (staff_id) references staff(staff_id),
    foreign key (customer_id) references customer(customer_id)
);

INSERT INTO ATTENDS VALUES("1","2");
INSERT INTO ATTENDS VALUES("1","1");
INSERT INTO ATTENDS VALUES("1","3");
INSERT INTO ATTENDS VALUES("2","3");
INSERT INTO ATTENDS VALUES("4","2");

SELECT * FROM ATTENDS;

SELECT staff_name
FROM staff
where salary>30000;

ALTER TABLE customer
ADD no_of_days int;

SELECT 0.95*salary as new_sal
FROM staff
where salary>30000;

update staff
set salary = 0.95*salary
where salary>30000;

alter table customer
rename column fname to first_name;

