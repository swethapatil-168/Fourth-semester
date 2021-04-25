package SEE;
import CIE.*;
import java.util.Scanner;
public class External extends CIE.Student{
public double[] see_marks=new double[5];
public int i;
public void accept_see()
 {
	Scanner sc=new Scanner(System.in);
	for(i=0;i<5;i++)
	{
		System.out.println("Enter the SEE marks of subject"+(i+1)+":");
		see_marks[i]=sc.nextDouble();
	}
 }
}