#include<stdio.h>
#include<stdlib.h>
int** allocateMat(int r,int c){
    int**matrix=(int**)malloc(r*sizeof(int *));
    if(matrix==NULL){
        printf("Memory allocation failed!\n");
        return NULL;
    }
    for (int i=0;i<r;i++){
        matrix[i]=(int*)malloc(c*sizeof(int));
        if (matrix[i]==NULL){
            printf("Memory allocation failed!\n");
            for (int j=0;j<i;j++){
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}
void freeMat(int **matrix,int r) {
    for(int i=0;i<r;i++) {
        free(matrix[i]);
    }
    free(matrix);
}
void readMat(int m,int n,int **mat){
	printf("Enter matrix elements:");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			scanf("%d",*(*(mat+i)+j);
	}
}
void displayMat(int **mat,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",*(*(mat+i)+j));
		}
		printf("\n");
	}
}
int** multiplyMatrices(int **mat1,int **mat2,int r1,int c1,int c2) {
    int **product=allocateMat(r1, c2);
    if(product==NULL){
        return NULL;
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            *(*(product+i)+j)=0;
            for(int k=0;k<c1;k++) {
                *(*(product+i)+j)+=*(*(mat1+i)+k) * *(*(mat2+k)+j);
            }
        }
    }
    return product;
}

int main(){
	int m1,n1,m2,n2;
	printf("Enter number of rows and columns for matrix 1:");
	scanf("%d%d",&m1,&n1);
	printf("Enter number of rows and columns for matrix 2:");
	scanf("%d%d",&m2,&n2);
	if(n1!=m2){
		printf("Matrix multiplication not possible.");
		exit(0);
	}
	int**mat1=allocateMat(m1,n1);
    int**mat2=allocateMat(m2,n2);
    if (mat1==NULL||mat2==NULL){
        return 1;
    }

    readMat(mat1,m1,n1);
    readMat(mat2,m2,n2);

    printf("Matrix 1:\n");
    displayMat(mat1,m1,n1);

    printf("Matrix 2:\n");
    displayMat(mat2,m2,n2);

    int **product=multiplyMat(mat1,mat2,m1,n1,n2);
    if (product == NULL) {
        freeMat(mat1,m1);
        freeMat(mat2,m2);
        return 1;
    }
    printf("Product of the matrices:\n");
    displayMat(product,m1,n2);
    freeMat(mat1,m1);
    freeMat(mat2,n2);
    freeMat(product,m1);
    return 0;
}