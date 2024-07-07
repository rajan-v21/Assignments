package day1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class App1 {
	public static void main(String args[]) {
		String ss = "jdbc:mysql://localhost:3306/bit";
		try (Connection con = DriverManager.getConnection(ss, "root", "rajan@123")) {
			System.out.println("Implementation class is\t" + con.getClass());
			Statement st = con.createStatement();
			System.out.println("Implementation class is\t" + st.getClass());
			ResultSet rs = st.executeQuery("select * from dept");
			System.out.println("Implementation class is\t" + rs.getClass());
			while (rs.next()) {
				int no = rs.getInt("deptno");
				String name = rs.getString("deptname");
				String add = rs.getString("loc");
				System.out.println(no + "\t" + name + "\t" + add);
			}
		} catch (Exception ee) {
			System.out.println(ee);
		}
	}
}
