import java.io.*;
import java.util.*;

class addMatrix {
    public static int[][] readMatrix(int r, int c) {
        Scanner s=new Scanner(System.in);
        int[][] mat=new int[r][c];
        System.out.println("Enter the elements of the matrix:");
        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++) {
                mat[i][j]=s.nextInt();
            }
        }
        return mat;
    }
    public static void main(String[] args){
    int m,n;
    System.out.println("Enter Dimensions of matrix:");
    Scanner s = new Scanner(System.in);
    m=s.nextInt();
    n=s.nextInt();
    int[][] mat1 = new int[m][n];
    int[][] mat2 = new int[m][n];
    int[][] sum = new int[m][n];
    mat1=readMatrix(m, n);
    mat2=readMatrix(m, n);
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    System.out.println("Sum of entered matrices:");
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            System.out.print(sum[i][j]+" ");
        }
        System.out.println();
    }
    }

    
}

