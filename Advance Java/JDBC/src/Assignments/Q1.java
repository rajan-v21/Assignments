package Assignments;

import java.sql.*;
import java.util.Scanner;
public class Q1 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String ss = "jdbc:mysql://localhost:3306/Bit";
		try(Connection con = DriverManager.getConnection(ss, "root", "rajan@123")){
			System.out.println("Enter Name: ");
			String name = sc.next();
			System.out.println("Enter Age: ");
			int age = sc.nextInt();
			
			PreparedStatement pst = con.prepareStatement("insert into student(name, age) value(?,?)");
			pst.setString(1, name);
			pst.setInt(2, age);
			pst.executeUpdate();
			
			Statement st = con.createStatement();
			ResultSet rs = st.executeQuery("select * from student");
			ResultSetMetaData rsm = rs.getMetaData();
			int col = rsm.getColumnCount();
			for(int i=1; i<=col;i++) {
				System.out.print(rsm.getColumnName(i)+"\t");
			}
			while(rs.next()) {
				System.out.println();
				for(int i =1; i <=col; i++) {
					System.out.print(rs.getObject(i)+"\t");
				}
			}
			
		}
		catch(Exception e) {
			e.printStackTrace();
		}
	}

}
