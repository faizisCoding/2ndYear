#include <stdio.h>

int Lsearch(int arr[],int len,int key) {
    for(int i=0;i<len;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[10],n,key;
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to be searched: ");
    scanf("%d",&key);
    int pos=Lsearch(a,n,key);
    if (pos!=-1)
        printf("Element found at position %d\n",pos+1);
    else printf("Element not found.\n");
    return 0;
}
