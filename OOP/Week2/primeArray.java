import java.io.*;
import java.util.*;
class primeArray {
    public static int isPrime(int a){
        if(a<=1) return -1;
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                return -1;  
            }
        }
        return 1;
    }
    public static void Prime(int[] a,int n){

        for(int i=0;i<n;i++){
            if(a[i]==2) System.out.print(a[i]+" ");
            else if(isPrime(a[i])==1){
                System.out.print(a[i]+" ");
            }
        }
    }
    public static void main(String[] args){
        int n;
        Scanner s= new Scanner(System.in);
        System.out.println("Enter array length: ");
        n=s.nextInt();
        int[] a = new int[n];
        System.out.println("Enter array elements: ");
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        Prime(a,n);
    }
    
}
