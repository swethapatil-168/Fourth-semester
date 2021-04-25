class Thread1 implements Runnable{
Thread t1;
Thread1()
 {
	t1=new Thread(this,"First Thread");
 	t1.start();
 }
public void run()
 {
   try{
	while(true)
	{
	System.out.println("BMS College of Engineering");
	Thread.sleep(10000);
	 }
   }
  catch(InterruptedException e){
	System.out.println("Thread1 interrupted"+e); 
   }

 } 
}

class Thread2 implements Runnable{
Thread t2;
Thread2()
 {
	t2=new Thread(this,"Second Thread");
	t2.start();
 }
public void run()
 {
   try{
	while(true)
 	{
	System.out.println("CSE");
	Thread.sleep(2000);
	}
   }
   catch(InterruptedException e){	
	System.out.println("Thread2 interrupted"+e);
   }
 }
}

class Labprogram9{
public static void main(String[] args){
System.out.println("Press control+c to stop");
Thread1 obj1=new Thread1();
Thread2 obj2=new Thread2();
}
}








