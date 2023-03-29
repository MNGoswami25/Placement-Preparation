//2.	Selection sort
#include<stdio.h>
void selection_sort(int A[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
}
int main(){
    int n,arr[50];
    printf("Enter Size of an Array : ");
    scanf("%d",&n);
    printf("Enter Elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    printf("Array after Sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    }
}