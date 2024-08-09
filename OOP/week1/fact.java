import java.io.*;
import java.util.*;
class fact{
	public static void main(String args[]){
		int n,f,c;
		int r;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter n:");
		n = s.nextInt();
		f=fact(n);
		System.out.println("n Factorial="+f);
		System.out.println("Enter r");
		r = s.nextInt();
		c=fact(n)/fact(r)/fact(n-r);
	    System.out.println("NCR="+c);



	}
	static int fact(int x){
		if (x==1||x==0)
			return 1;
		else return x*fact(x-1);
	}
}