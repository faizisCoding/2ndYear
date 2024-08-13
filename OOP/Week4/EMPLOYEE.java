import java.io.*;
//import java.util.*;
class EMPLOYEE{
	String Ename = "No Name";
	int Esalary = 0;
	EMPLOYEE(){
		System.out.println("inside default constructor");
        display(Esalary,Ename);
	}
	EMPLOYEE(int i,String n){
        Esalary = i;
        Ename = n;
        System.out.println("inside parameterized constructor");
        display(Esalary,Ename);
    }
    void display(int i,String str){
    	System.out.println("The values are "+i+","+str);
    }
    public static void main(String[] args){
    	EMPLOYEE e1 = new EMPLOYEE();
    	Scanner s = new Scanner(System.in);
    	System.out.println("Enter EMPLOYEE name:");
    	String name = s.nextLine();
    	System.out.println("Enter EMPLOYEE Salary:");
    	int i = s.nextInt();
        EMPLOYEE e2 = new EMPLOYEE(i,name);
    }

}