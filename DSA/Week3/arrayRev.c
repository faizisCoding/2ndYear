#include<stdio.h>
void Reverse(int *ptr,int n){
	int *ptr1;
	ptr1=ptr+n-1;
	int temp;
	for(int i=0;i<n/2;i++){
		temp=*ptr;
		*ptr=*ptr1;
		*ptr1=temp;
		ptr++;
		ptr1--;
	}
}
void main(){
	int a[10],n;
	printf("Enter array length:");
	scanf("%d",&n);
	printf("Enter array:");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n");
	int *p=&a[0];
	Reverse(p,n);
	printf("Reversed array:\n");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}