import java.util.*;
//import java.io.*;
class STUDENT{
	String name = "No Name";
	int id = 0;
	STUDENT(){
		System.out.println("inside default constructor");
        display(id,name);
	}
	STUDENT(int i,String n){
        id = i;
        name = n;
        System.out.println("inside parameterized constructor");
        display(id,name);
    }
    void display(int i,String str){
    	System.out.println("The values are "+i+", "+str);
    }
    public static void main(String[] args){
    	STUDENT s1 = new STUDENT();
    	Scanner s = new Scanner(System.in);
    	System.out.println("Enter Student name:");
    	String name = s.nextLine();
    	System.out.println("Enter Student id:");
    	int i = s.nextInt();
        STUDENT s2 = new STUDENT(i,name);
    }
}

/* OUTPUT
inside default constructor
The values are 0, No Name
Enter Student name:
abc
Enter Student id:
1234
inside parameterized constructor
The values are 1234, abc
 */