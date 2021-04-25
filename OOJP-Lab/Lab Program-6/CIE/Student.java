package CIE;
import java.util.Scanner;
public class Student{
public String usn,name;
public int sem;
public void accept(int i)
 {
	System.out.println("Enter the details of student"+(i+1));
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the USN:");
	usn=sc.nextLine();
	System.out.println("Enter your name:");
	name=sc.nextLine();
	System.out.println("Enter the semester:");
	sem=sc.nextInt();
 } 
public void display(int i)
 {
	System.out.println("The details of student"+(i+1)+"are:");
	System.out.println("USN: "+usn);
	System.out.println("Name: "+name);
	System.out.println("Semester: "+sem);
 }
}