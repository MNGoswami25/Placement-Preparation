//1.	Insertion sort
#include<stdio.h>
void insertion_sort(int A[],int n){
    for(int i=1;i<n;i++){
        int key=A[i];
        int j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
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
    insertion_sort(arr,n);
    printf("Array after Sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    }
}