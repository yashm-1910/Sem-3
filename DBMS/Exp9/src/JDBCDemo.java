public class JDBCDemo {
	public static void main (String arg[])
	{
		DBConnection.createConnection();
		DBConnection.closeConnection();
	}
}