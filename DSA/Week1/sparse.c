#include <stdio.h>

int isSparse(int r,int c,int m[][c]){
    int zeroCount=0;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            if (m[i][j]==0){
                zeroCount++;
            }
        }
    }
    if(zeroCount>r*c/2)
        printf("Entered matrix is sparse.");
    else
        printf("Entered matrix is not sparse.");
    

}

int main(){
    int rows,cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int mat[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    isSparse(rows,cols,mat);
    return 0;
}
