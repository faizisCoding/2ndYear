#include<stdio.h>
void ssort(int arr[],int n,int key)
{
	if(key>=n-1) return;
	int min=key;
	for(int i=key;i<n;i++){
        if(arr[i]<arr[min])
        	min=i;
    }
    int temp;
    temp=arr[key];
    arr[key]=arr[min];
    arr[min]=temp;
    ssort(arr,n,key+1);
}
int main(void){
	int a[10],key=0,len;
	printf("Enter length of array: ");
	scanf("%d",&len);
	printf("Enter array: ");
	for(int i=0;i<len;i++)
		scanf("%d",&a[i]);
	ssort(a,len,key);
	printf("Sorted array:\n");
	for(int i=0;i<len;i++)
		printf("%d\t",a[i]);
	return 0;



}