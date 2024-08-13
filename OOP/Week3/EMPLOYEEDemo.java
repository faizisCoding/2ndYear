import java.io.*;
import java.util.*;
class EMPLOYEE{
	String ename;
	int eid;
	float basic,da,gross_sal,net_sal,it;
	void read(String name,int id,float Bas){
		ename=name;
		eid=id;
		basic = Bas;
	}
	void compute_net_sal(){
		da = (float)0.52*basic;
		gross_sal = basic+da;
		it=(float)0.3*gross_sal;
		net_sal=gross_sal-it;
	}
	void display(int i){
		System.out.println("Employee name: "+ename);
		System.out.println("Employee id "+eid);
		System.out.println("Employee Basic: "+basic);
		System.out.println("Employee Da: "+da);
		System.out.println("Employee gross sal: "+gross_sal);
		System.out.println("Employee IT: "+it);
		System.out.println("Employee Net_Sal: "+net_sal);
	}
	public static void main(String[] args){
		EMPLOYEE e = new EMPLOYEE();
		Scanner s = new Scanner(System.in);
		int n;
		System.out.println("Enter no. of employees:");
		n=s.nextInt();
		for(int i=0;i<n;i++){
			System.out.println("Employee "+(i+1));
			System.out.print("Enter employee name:");
			String garb = s.nextLine();
			String name = s.nextLine();
			System.out.println("Enter employee id(int):");
			int id = s.nextInt();
			System.out.println("Enter employee Basic Sal:");
			float Bas = s.nextFloat();
			e.read(name,id,Bas);
			e.compute_net_sal();
			e.display(i);
		}
	}
}