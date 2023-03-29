//Bubble sort
#include<stdio.h>
void bubble_sort(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j+1]<A[j]){
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
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
    bubble_sort(arr,n);
    printf("Array after Sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    }
}
