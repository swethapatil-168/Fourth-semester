class WrongAge extends Exception{
public String toString()
 {
	return "Ages are not valid";
 }
}

class Father{
int father_age;
 Father(int father_age)
 {
	this.father_age=father_age;
 }
}

class Son extends Father{
int son_age;
 Son(int father_age,int son_age)
 {
	super(father_age);
	this.son_age=son_age;
 }
void check() throws WrongAge
 {
	if(father_age<0 || son_age<0 || son_age>=father_age )
    {
	throw new WrongAge();
    }
 }
}

class Labprogram8{
public static void main(String args[]){
Son ob1=new Son(30,5);
Son ob2=new Son(-1,10);
try{
	ob1.check();
	System.out.println("Ages of father and son are acceptable");
 }
catch(WrongAge e){
	System.out.println("Caught Exception: "+e);
 }

try{
	ob2.check();
	System.out.println("Ages of father and son are acceptable");
 }
catch(WrongAge e){
	System.out.println("Caught Exception: "+e);
 }
}
}






