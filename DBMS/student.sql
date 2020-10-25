/*CREATE TABLE QUERY
CREATE TABLE table_name(
	attribute data type,
	attribute data type,
	attribute data type,
	attribute data type
);
*/

CREATE TABLE student (
	student_id INT PRIMARY KEY AUTO_INCREMENT,
	name VARCHAR(20) NOT NULL,
	major VARCHAR(20) DEFAULT 'undecided'
);

--To Describe the table
DESCRIBE student;

--To delete the table
DROP TABLE student;

--To add column to the table

ALTER TABLE student ADD gpa DECIMAL(4,2);

--To drop a column in a table
ALTER TABLE student DROP gpa;

--To Insert values in a table
INSERT INTO student VALUES(1, 'Jack', 'Biology');

--To insert only some attributes in a table
INSERT INTO student(student_id, name) VALUES(3, 'Claire');  --Major will be null for claire

--To display all the values in the table
SELECT * FROM 	student;

--To update data in table
UPDATE student
SET major = 'Bio'
WHERE major = 'Biology';

--To delete from a table
DELETE FROM student
WHERE student_id = 5; 

--To delete everything from a table
DELETE FROM student;

--To display particular column
SELECT name
FROM student;

--To display distinct values of a column
SELECT DISTINCT major
FROM student;

--To display data in an ordered manner
SELECT name, major
FROM student
ORDER BY name;
--By default ordering is done in ascending order
--To get order in descending order
SELECT major, name
FROM student
ORDER BY name DESC;

--To limit the result
SELECT *
FROM student
LIMIT  2;

--To filter the output 
SELECT name, major
FROM student
WHERE major = 'Chemistry'  OR major = 'Biology'
ORDER BY name;
--We can use various operators in the WHERE statement like =, <, >, =<,>=, <>(Not equal to), AND, OR

--IN STATEMENT
SELECT *
FROM student
WHERE major IN ('Biology', 'Chemistry') AND student_id <> 4;