class Generic<T1,T2>{
T1 obj1;
T2 obj2;
 Generic(T1 obj1,T2 obj2)
  {
	this.obj1=obj1;
	this.obj2=obj2;
  }
void showtypes()
 {
	System.out.println("Type of T1 is "+obj1.getClass().getName());
	System.out.println("Type of T2 is "+obj2.getClass().getName());
 }
T1 getobject1()
 {
	return obj1;
 }
T2 getobject2()
 {
	return obj2;
 }
}

class Labprogram7{
public static void main(String[] args){
Generic<Integer, String> ob = new Generic<Integer,String>(44,"Swetha Patil");
ob.showtypes();
int a=ob.getobject1();
String str=ob.getobject2();
System.out.println("Value of 1st parameter is: "+a);
System.out.println("Value of 2nd parameter is: "+str);
}
}

