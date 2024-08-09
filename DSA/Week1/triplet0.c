#include<stdio.h>
void triplet(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if (!(a[i]+a[j]+a[k])){
					printf("%d %d %d\n",a[i],a[j],a[k]);
				}
			}
		}
	}
}
int main(void){
	int arr[10],i,n;
	printf("Enter length of array: ");
	scanf("%d",&n);
	printf("Enter array: ");
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	triplet(arr,n);
    return 0;
}