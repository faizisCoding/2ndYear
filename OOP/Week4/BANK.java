//import java.io.*;
import java.util.*;
class BANK{
	String name;
	int accountNo;
	String accType;
	float bal;
	static float rateOfI;
	BANK(){
		name="No name";
		accountNo=0000;
		accType="No Type";
		bal=0;
		rateOfI=0;
		display(name,accountNo,accType,bal);
		displayROI(rateOfI);
	}
	BANK(String n,int accno,String acctype,float bal1,float roi){
		name=n;
		accountNo=accno;
		accType=acctype;
		bal=bal1;
		rateOfI=roi;
		display(name,accountNo,accType,bal);
		displayROI(rateOfI);
	}
	void display(String n,int accno,String acctype,float bal1){
		System.out.println("Name of the depositor: "+n);
		System.out.println("Account number: "+accno);
		System.out.println("Account Type: "+acctype);
		System.out.println("Balance: "+bal1);
	}
	static void displayROI(float roi){
		System.out.println("Rate of Interest: "+roi);
	}
	void deposit(float dep){
		bal+=dep;
		System.out.println("Balance after deposit: "+bal);
	}
	void withdraw(float wit){
		if(bal - wit >= 100){
			bal-=wit;
			System.out.println("Balance after withdrawal: "+bal);
		}
		else
			System.out.println("Unable to withdraw, below min balance.");
	}
	public static void main(String[] args){
		BANK b1 = new BANK();
		Scanner s = new Scanner(System.in);
		Random rand = new Random();
		int accNum=rand.nextInt(10000);

		System.out.print("Enter name:");
		String accName=s.nextLine();

		System.out.print("Enter acc type(Current/Savings):");
		String accTy=s.nextLine();

		System.out.print("Enter deposit amount:");
		float dep = s.nextFloat();
		float roi;
		if(accTy.equals("Current"))
			roi=3;
		else
			roi=(float)1.5;

		BANK b2 = new BANK(accName,accNum,accTy,dep,roi);

		System.out.print("Enter withdrawal amount:");
		float w=s.nextFloat();
		b2.withdraw(w);
	}
}

/* OUTPUT
Name of the depositor: No name
Account number: 0
Account Type: No Type
Balance: 0.0
Rate of Interest: 0.0
Enter name:ABC
Enter acc type(Current/Savings):Current
Enter deposit amount:12000
Name of the depositor: ABC
Account number: 8910
Account Type: Current
Balance: 12000.0
Rate of Interest: 1.5
Enter withdrawal amount:12
Balance after withdrawal: 11988.0
 */