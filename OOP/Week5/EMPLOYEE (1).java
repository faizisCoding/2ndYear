import java.util.*;
class EMPLOYEE{
	String ename;
	int eid;
	float basic,da,gross_sal,net_sal,it;
	EMPLOYEE(String name,int id,int Bas){
		System.out.println("inside parameterized constructor");
		ename=name;
		eid=id;
		basic = Bas;
		compute_net_sal();
        display();
	}
	void compute_net_sal(){
		da = (float) 0.52*basic;
		gross_sal = basic+da;
		it=(float)0.3*gross_sal;
	}
	void display(){
		System.out.println("Employee name: "+ename);
		System.out.println("Employee id "+eid);
		System.out.println("Employee Basic: "+basic);
		System.out.println("Employee Da: "+da);
		System.out.println("Employee Net Sal: "+gross_sal);
		System.out.println("Employee Net_Sal: "+net_sal);
		System.out.println("Employee IT: "+it);
	}
	EMPLOYEE(){
		System.out.println("inside default constructor");
		ename = "No Name";
	    eid=000;
	    basic = 0;
		compute_net_sal();
        display();
	}
	/*EMPLOYEE(int i,String n){
        basic = i;
        Ename = n;
        System.out.println("inside parameterized constructor");
        display(net_sal,ename);
    }*/
    void display(int i,String str){
    	System.out.println("The values are "+i+","+str);
    }
    public static void main(String[] args){
    	EMPLOYEE e1 = new EMPLOYEE();
    	Scanner s = new Scanner(System.in);
    	System.out.println("Enter EMPLOYEE name:");
    	String name = s.nextLine();
    	System.out.println("Enter EMPLOYEE basic:");
    	int i = s.nextInt();
    	System.out.println("Enter EMPLOYEE id:");
    	int id = s.nextInt();
        EMPLOYEE e2 = new EMPLOYEE(name,id,i);
        formatEmployeeName(e2.ename);
    }
    public static void formatEmployeeName(String str1){
    	String str=str1;
    	str.toUpperCase(0);
    	for(int i=1;i<str.length;i++){
    		str.toUpperCase(i);
    		if(str.substring(i,i+1)==" "){
    			str.toUpperCase(i+1);
    			i++;
    		}
    	}
    	System.out.println("Employee Name formatted:"+str);
    }


}
