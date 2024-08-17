import java.util.Scanner;
//import java.io.*;
class Counter{
    private static int count=0;
Counter(){ count++; } 
    static void showCount(){ //method which shows no. of objects created
        System.out.println("No. of objects created = "+count);
    }
    public static void main(String[] args){
        System.out.print("Enter number of objects: ");
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for(int i=0; i < n ; i++) {Counter c = new Counter();} //creating n objects
        Counter.showCount(); //displaying no. of objects created 
    }
}
/* OUTPUT:
Enter number of objects: 5
No. of objects created = 5
 */
