#include<stdio.h>
#include<stdlib.h>

//Function to demonstrate returning a pointer from a function
int** gimmePtr(int **p) {
    **p=10;//Modifying the value pointed by the pointer to the pointer
    return p;
}

int main(){
    int **ptr;// Pointer to pointer to an int
    int *p=(int*)malloc(sizeof(int));
    *p=1;// Assign value to the memory pointed by p
    printf("%d value stored at address of p\n", *p);
    ptr=&p;  // ptr points to the pointer p
    printf("%d Value pointed by p pointer which is pointed to by ptr pointer.\n", *p);
    int **q = gimmePtr(ptr);  // Function call, returns pointer to pointer
    printf("New value is %d pointed to by pointer at q which was returned by the function.\n",**q);
    free(p);
    return 0;
}
/* OUTPUT:
1 value stored at address of p
1 Value pointed by p pointer which is pointed to by ptr pointer.
New value is 10 pointed to by pointer at q which was returned by the function.*/