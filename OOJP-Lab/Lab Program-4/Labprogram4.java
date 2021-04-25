import java.util.*;
abstract class Shape{
int i,j;
abstract void printArea(double i,double j);
}

class Rectangle extends Shape{
void printArea(double i,double j)
 {
	System.out.println("Area of rectangle= "+(i*j));
 } 
}

class Triangle extends Shape{
void printArea(double i,double j)
 {
	System.out.println("Area of triangle= "+(1.0/2.0*i*j));  
 }
}

class Circle extends Shape{
void printArea(double i,double j)
 {
	System.out.println("Area of circle= "+(3.142*i*j)); 
 }
}

class Labprogram4{
public static void main(String[] args){
double l,b,base,h,r;
Scanner sc=new Scanner(System.in);
Rectangle re=new Rectangle();
Triangle t=new Triangle();
Circle c=new Circle();
System.out.println("Enter the length and breadth of the rectangle");
l=sc.nextDouble();
b=sc.nextDouble();
re.printArea(l,b);
System.out.println("Enter the base and height of the triangle");
base=sc.nextDouble();
h=sc.nextDouble();
t.printArea(base,h);
System.out.println("Enter the radius of the circle");
r=sc.nextDouble();
c.printArea(r,r);
}
}










