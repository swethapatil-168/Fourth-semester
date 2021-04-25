import java.util.Scanner;
class Account{
String cus_name;
String acct_no;
int acc_type;
double balance;
double deposit;
boolean cheque;
/*void cheque()
 {
 if(cheque=false)
 System.out.println("For savings bank account we won't provide you the cheque book facility");
 if(cheque=true)
 System.out.println("Cheque book facility will be given");
 }*/
void accept()
 {
	/*if(acc_type=1)
	cheque=false;
	else
	cheque=true;*/
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter your name");
	cus_name=sc.nextLine();
	System.out.println("Enter your account number");
	acct_no=sc.nextLine();
	System.out.println("Enter balance");
	balance=sc.nextDouble();
 }
void display(int acc_type)
 {
	
	System.out.println("Name: "+cus_name);
	System.out.println("Account number: "+acct_no);
	//System.out.println("Account type: "+acct_type);
	System.out.println("Balace: "+balance);
	if(acc_type==1)
	/*{
	acc_type="Savings Account";
	System.out.println("Account type: "+acc_type);*/
	System.out.println("For savings bank account we won't provide you the cheque book facility");
	//}
	else
	/*{
	acc_type="Current Account";
	System.out.println("Account type: "+acc_type);*/
	System.out.println("Cheque book facility will be given");
	
 }
void deposit()
 {
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the amount to be deposited");
	deposit=sc.nextDouble();
	balance=balance+deposit;
	System.out.println("Rupees "+deposit+" has been deposited");
 }
/*void updatebalance1()
 {
	System.out.println("Balance amount is"+balance);
 }*/

}

class Savings_acct extends Account{
double interest;
double rate=10;
double comp_interest()
 {
	System.out.println("Enter the time in years");
	Scanner sc=new Scanner(System.in);
	double time=sc.nextDouble();
	double interest=balance*(Math.pow(1+rate/100,time)-1);
	return interest;
	/*balance=balance+interest;
	System.out.println("The updated balance after adding interest is "+balance);*/
 }
void updatebalance()
 {
	balance=balance+comp_interest();
	System.out.println("The updated balance after adding interest is "+balance);
	return;
 }
void withdraw()
 {
	double amt;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the amount to be withdrawn");
	amt=sc.nextDouble();
	if(amt>balance)
	{
		System.out.println("Your withdraw amount is greater than your balance amount,so money withdrawal is not possible");
 	}
	else
	{
	System.out.println("Rupees "+amt+ "has been withdrawn");
	balance=balance-amt;
	//return balance;
	}
 }
double displaybalance()
 {
	return balance;
 }

}

class Current_acct extends Account{
double amt;
double min_balance=500.0;
double penalty=50.0;
void check_balance()
{
	if(balance<min_balance)
 	 {
		System.out.println("A penalty of "+penalty+ "is imposed as your balance is less than the minimum balance");
		balance=balance-penalty;
 	 }
	else
	 return;
}
void withdraw()
 {
	Scanner sc=new Scanner(System.in);
	//check_balance();
	amt=sc.nextDouble();
	if(amt>balance)
	System.out.println("Your withdraw amount is greater than your balance amount,so money withdrawal is not possible");
	else
	 {
		balance=balance-amt;
		check_balance();
	 }
 }
double updatebalance()
 {
	return balance;
 }
}

class Bank{
public static void main(String[] args){
int acc_type,choice;
Scanner sc=new Scanner(System.in);
Savings_acct s=new Savings_acct();
Current_acct c=new Current_acct();
System.out.println("Choose the type of account\n1.Savings acccount\n2.Current account");
acc_type=sc.nextInt();
if(acc_type==1)
 {
	s.accept();
	s.display(acc_type);
  while(true)
 {
	System.out.println("What do you like to do?\n1.Deposit money\n2.Withdraw money\n3.Display balance\n4.Exit");
	choice=sc.nextInt();
  switch(choice)
   {
	case 1:s.deposit();
		s.updatebalance();
		break;
	case 2:s.withdraw();
		break;
	case 3:System.out.println("The balance amount is "+s.displaybalance());
		break;
	case 4:System.exit(0);
		//break;
	default:System.out.println("Please input a valid number");
    }
 }
 }
else if(acc_type==2)
 {
	c.accept();
	c.display(acc_type);
 while(true)
 {
	System.out.println("What do you like to do?\n1.Deposit money\n2.Withdraw money\n3.Display balance\n4.Exit");
	choice=sc.nextInt();
 switch(choice)
   {
	case 1:c.deposit();
		break;
	case 2:System.out.println("Enter the amount to be withdrawn");
		c.withdraw();
		break;
	case 3:System.out.println("The balance amount is "+c.updatebalance());	
		break;
	case 4:System.exit(0);
		//break;
	default:System.out.println("Please input a valid number");
    }
 }
 }
else
	System.out.println("Please input a valid number");
}
}

