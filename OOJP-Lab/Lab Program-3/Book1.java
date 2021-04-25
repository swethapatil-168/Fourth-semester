import java.util.*;
class Book{
String name;
String author;
int num_pages;
double price;
	Book(){
		this.name="";
		this.author="";
		this.num_pages=1;
		this.price=1.0;
	}
void accept()
{
 Scanner sc=new Scanner(System.in);
 
 System.out.println("enter name and author of book");
 name=sc.nextLine();
 author=sc.nextLine();
 System.out.println("enter pages and price of book");
 num_pages=sc.nextInt();
 price=sc.nextDouble();
}
public String toString()
{
return("details:\nbook name:"+name+ "\n author:"+author+ "\nprice="+price+ "\n number of pages:"+num_pages);
}
}
class Book1{
public static void main(String args[])
{
Scanner sc= new Scanner(System.in);
System.out.println("enter number of books ");
int num=sc.nextInt();
Book ob[]=new Book[num];
for(int i=0;i<num;i++)
{
ob[i]=new Book();
ob[i].accept();
System.out.println(ob[i]);
}
}
}
