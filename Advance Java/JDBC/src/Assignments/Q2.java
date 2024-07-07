package Assignments;

import java.sql.*;
import java.util.Scanner;

public class Q2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub\
		String ss = "jdbc:mysql://localhost:3306/bit";
		Scanner sc = new Scanner(System.in);
		try(Connection con = DriverManager.getConnection(ss, "root", "rajan@123")){
			System.out.println("Enter no of records: ");
			int rec = sc.nextInt();
			for(int i=0; i<rec; i++) {
				System.out.println("Enter Employee Name: ");
				String empname = sc.next();
				System.out.println("Enter Employee Designation: ");
				String desig = sc.next();
				
				PreparedStatement pst = con.prepareStatement("insert into employee(empname, desig) values(?,?)");
				pst.setString(1, empname);
				pst.setString(2, desig);
				pst.executeUpdate();
			}
			Statement st = con.createStatement();
			ResultSet rs = st.executeQuery("select * from employee");
			ResultSetMetaData rsm = rs.getMetaData();
			int col = rsm.getColumnCount();
			for(int i=1; i<=col; i++) {
				System.out.print(rsm.getColumnName(i)+"\t");
			}
			while(rs.next()) {
				System.out.println();
				for(int i =1; i<=col;i++) {
					System.out.print(rs.getObject(i)+"\t");
				}
			}
		}
		catch(Exception e) {
			e.printStackTrace();
		}

	}

}
