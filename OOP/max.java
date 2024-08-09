import java.io.*;
import java.util.*;
class max{
	public static void main(String args[]){
		System.out.println("Enter 3 integers:");
		Scanner s = new Scanner(System.in);
		int a,b,c,d;
		a = s.nextInt();
		b = s.nextInt();
		c = s.nextInt();
		//d = maxIntifElse(a,b,c);
		d = maxIntif(a,b,c);
		System.out.println(d+" is the larest integer.");


	}
	static int maxIntifElse(int x,int y,int z){
		if(x>=y && x>=z) return x;
		else if(x<=y && y>=z) return y;
		else return z;
	}
	static int maxIntif(int x,int y,int z){
		if(x>=y){
			if(x>=z){
				return x;
			}
			else{ 
				return z;
				
			}
		}
		else {
			if(y>=z){
			 return y;
			 
			}
			else{ 
				return z;
			 
			}

		}
	}
}