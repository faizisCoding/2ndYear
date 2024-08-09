import java.io.*;
import java.util.*;
class arrayloop {
    public static void main(String[] args){
        int i,n;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter length of array: ");
        n = s.nextInt();
        int arr[]= new int[n];
        System.out.print("Enter " + n + " integers: ");
        for (i=0;i<n;i++)
          arr[i] = s.nextInt( );
        System.out.println("Entered array: ");
        for (int num : arr )
          System.out.print(num+" ");
    }
    
}
