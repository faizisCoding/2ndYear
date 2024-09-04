#include<stdio.h>

void Smol(int k,int m,int arr[]){
    int count=0;
    while(count<k){
        for(int i=0;i<m-1;i++){
            if (arr[i]<arr[i+1]){
                for (int j=i;j<m-1;j++){
                    arr[j]=arr[j+1];
                }
                m--;
                count++;
                break;
            }
        }
    }
    
    printf("Array after applying condition: ");
    for (int j=0;j<m;j++)
        printf("%d ",arr[j]);
    printf("\n");
}

int main(){
    printf("Enter array length: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements (integers): ");
    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    int k;
    printf("Enter number of elements to be deleted: ");
    scanf("%d",&k);
    Smol(k,n,arr);
    return 0;
}

/* OUTPUT
Enter array length: 5
Enter array elements (integers): 20 10 25 30 40
Enter number of elements to be deleted: 2
Array after applying condition: 25 30 40
*/


