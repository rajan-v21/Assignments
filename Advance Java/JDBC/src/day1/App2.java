package day1;

import java.sql.*;

public class App2 {
	public static void main(String args[]) {
		String ss = "jdbc:mysql://localhost:3306/bit";
		try (Connection con = DriverManager.getConnection(ss, "root", "rajan@123")) {
			System.out.println("Implementation class is\t" + con.getClass());
			Statement st = con.createStatement();
			ResultSet rs = st.executeQuery("select * from dept");
			ResultSetMetaData rsm = rs.getMetaData();
			int col = rsm.getColumnCount();
			for(int i = 1; i <= col; i++) {
				System.out.print(rsm.getColumnName(i)+ "\t");
			}
			while(rs.next()) {
				System.out.println();
				for(int i =1; i <=col; i++) {
					System.out.print(rs.getObject(i)+ "\t");
				}
			}
		} catch (Exception ee) {
			System.out.println(ee);
		}
	}
}
