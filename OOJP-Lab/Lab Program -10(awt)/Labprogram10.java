import java.awt.*;
import java.awt.event.*;
class Dialogbox extends Dialog implements ActionListener
{
Labprogram10 l;
Dialogbox(Frame parent,String title)
 {
	super(parent,title,false);
	l=(Labprogram10)parent;
	setLayout(new FlowLayout());
	setSize(250,100);
	add(new Label(l.msg));
	Button b=new Button("OK");
	add(b);
	b.addActionListener(this);
 }
public void actionPerformed(ActionEvent ae)
 {
	dispose();
 }
}

public class Labprogram10 extends Frame implements ActionListener{
TextField num1,num2,res;
String num3;
Button div;
String msg="";
public Labprogram10()
 {
	setLayout(new FlowLayout());
	num1=new TextField(12);
	num2=new TextField(10);
	res=new TextField(8);
	Label number1=new Label("Num1:",Label.RIGHT);
	Label number2=new Label("Num2:",Label.RIGHT);
	Label result=new Label("Result:",Label.RIGHT);
	div=new Button("Divide");
	add(number1);
	add(num1);
	add(number2);
	add(num2);
	add(div);
	add(result);
	add(res);
	num1.addActionListener(this);
	num2.addActionListener(this);	
	div.addActionListener(this);
	res.addActionListener(this);
   addWindowListener(new WindowAdapter(){
   public void windowClosing(WindowEvent e){
	System.exit(0);
  }
 });
}
public void actionPerformed(ActionEvent ae)
{
 String s=ae.getActionCommand();
 if(s.equals("Divide"));
 res.setText(divide());
}
String divide()
{
 int n;
 int n1,n2;
 try{
 n1=Integer.parseInt(num1.getText());
 n2=Integer.parseInt(num2.getText());
	try{
	n=n1/n2;
	num3=String.valueOf(n);
	return num3;
	}
	catch(ArithmeticException e)
	{
	msg="Divide by zero error";
	Dialogbox d= new Dialogbox(this,"Exception message box");
	d.setVisible(true);
	return "";
	}
}
 catch(NumberFormatException nf)
 {
	msg="Input numbers should be integers";
	Dialogbox d= new Dialogbox(this,"Exception message box");
	d.setVisible(true);
	return "";
 }
}

public static void main(String[] args)
 {
	Labprogram10 appwin=new Labprogram10();
	appwin.setSize(new Dimension(380,180));
	appwin.setTitle("Division");
	appwin.setVisible(true);
 }
}








