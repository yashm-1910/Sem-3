import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class DBConnection {
	static Connection c = null;

	public static void createConnection(){
		
		 Statement stmt = null;
		 ResultSet rs = null;
		    try {
		    	System.out.println("Connecting....");
		      Class.forName("com.mysql.cj.jdbc.Driver");
		      c = DriverManager.getConnection("jdbc:mysql://localhost:3306/college","root","root");
		      System.out.println("Connected");
		      c.setAutoCommit(false);
		      stmt = c.createStatement();
		      
		      String sql = "SELECT * FROM user;";
		      rs = stmt.executeQuery(sql);
		      
		      System.out.println("Query Executed");
		      
		      while(rs.next()){
		    	  System.out.println(rs.getString("user_name"));
		      }
		      stmt.close();
		      
		      
		    } catch ( Exception e ) {
		      System.err.println( e.getClass().getName() + ": " + e.getMessage() );
		      System.exit(0);
		    }
		   
	}
	
	public static void closeConnection(){
		try {
			c.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}
}