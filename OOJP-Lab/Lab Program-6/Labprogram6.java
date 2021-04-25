import CIE.*;
import SEE.*;
import java.util.*;
class Labprogram6{
public static void main(String[] args){
 int n,i;
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number of students:");
n=sc.nextInt();
CIE.Internals[] in=new CIE.Internals[n];
SEE.External[] ex=new SEE.External[n];
for(i=0;i<n;i++)
 {
	in[i]=new CIE.Internals();
	ex[i]=new SEE.External();
	in[i].accept(i);
	in[i].accept_cie();
	ex[i].accept_see();
	in[i].display(i);
  for(int j=0;j<5;j++)
    {
	System.out.println("Final marks of Student"+ (i+1) + " in subject"+(j+1) + ":" + (in[i].cie_marks[j]+(ex[i].see_marks[j])/2.0));
    }
 }
}
}
