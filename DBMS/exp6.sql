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

SELECT * FROM College.user WHERE email_id
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