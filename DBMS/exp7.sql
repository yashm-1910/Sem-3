CREATE DEFINER=`root`@`localhost` PROCEDURE `display_users`()
BEGIN
SELECT * FROM College.user;
END

CALL display_users();

CREATE DEFINER=`root`@`localhost` PROCEDURE `device_cursor`()
BEGIN
DECLARE a VARCHAR(20);
DECLARE b VARCHAR(15);
DECLARE c1 cursor for SELECT device_id, device_type FROM device;
OPEN c1;
FETCH c1 INTO a,b;
SELECT a,b;
CLOSE c1;
END

CALL display_users();