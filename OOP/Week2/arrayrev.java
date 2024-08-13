import java.io.*;
import java.util.*;
class arrayrev{
	public static void main(String[] args){
		int n, i;
        Scanner s = new Scanner(System.in);
        System.out.print("Input number of integers: ");
        n = s.nextInt();
        int array[] = new int[n];
        System.out.print("Enter " + n + " integers: ");
        for (i=0;i<n;i++)
          array[i] = s.nextInt( );
        for(i=0;i<n/2;i++){
        	int temp;
        	temp = array[i];
        	array[i]=array[n-i-1];
        	array[n-i-1]=temp;
        }
        System.out.println("Reversed array:");
        for (i = 0; i < n; i++)
           System.out.print(array[i]+" ");

	}
}