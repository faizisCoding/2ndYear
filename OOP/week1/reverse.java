import java.io.*;
import java.util.*;
class reverse{
	public static void main(String[] args){
		int a,r;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter an integer:");
		a = s.nextInt();
		r=rev(a);
		System.out.println("Reversed integer:"+r);


	}
	static int rev(int x){
		
			int re=0,num=x;
            while (num>0){
            	re=re*10+num%10;
            	num=num/10;

            }
            if (re==x){ System.out.println("palindrome"); }
            else System.out.println("not palindrome");

            return re;
		
		
	}
}