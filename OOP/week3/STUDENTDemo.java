import java.io.*;
import java.util.*;

class STUDENT{
	String sname;
	float[] marks_array=new float[10];
	float total;
	float avg;
	void assign(String name,float tot,float average){
		sname=name;
		total=tot;
		avg=average;
	}
	void display(int len){
		System.out.println("Student name:"+sname);
		System.out.print("Student Marks:");
		for(int i=0;i<len;i++){
			System.out.print(" "+marks_array[i]);
		}
		System.out.println();
		System.out.println("Total:"+total);
		System.out.println("Average: "+avg);
	}
}
class STUDENTDemo{
	public static void main(String[] args){
		STUDENT stu = new STUDENT();
		Scanner s = new Scanner(System.in);
		String name;
		float tot=0;
		System.out.println("Enter student name:");
		//String garb = s.nextLine();
		name=s.nextLine();
		System.out.println("Enter number of marks:");
		int len=s.nextInt();
		System.out.println("Enter marks:");
		for(int i=0;i<len;i++){
			stu.marks_array[i]=s.nextFloat();
			tot+=stu.marks_array[i];
		}
		float average=tot/len;
		stu.assign(name,tot,average);
		stu.display(len);
	}
}