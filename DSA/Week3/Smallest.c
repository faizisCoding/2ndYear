#include<stdio.h>
#include<stdlib.h>
int smol(int *p,int len){
	int *walk;
	int smol;
	smol=*p;
	walk=p;
	for(int i=0;i<len;i++){
		if(*walk<smol)
			smol=*walk;
		walk++;
	}
	return smol;
}
void main(){
	int n,i;
	printf("Enter array length:");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter array:");
	for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Smallest element=%d\n",smol(arr,n));
    for (i=0;i<n;i++)
    	free(arr[i]);

}




