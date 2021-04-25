package CIE;
import java.util.Scanner;
public class Internals extends Student{
Scanner sc=new Scanner(System.in);
public double[] cie_marks=new double[5];
public int i;
public void accept_cie()
 {
	for(i=0;i<5;i++)
	{
		System.out.println("Enter the cie marks of subject"+(i+1)+":");
		cie_marks[i]=sc.nextDouble();
	}
 }
}