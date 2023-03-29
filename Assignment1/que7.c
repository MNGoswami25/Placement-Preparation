//2.	Linear search
#include<stdio.h>
int linearSearch(int A[],int n,int key){
    for(int i=0;i<n;i++){
        if(A[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,arr[50],key;
    printf("Enter Size of an Array : ");
    scanf("%d",&n);
     printf("Enter Elements in sorted order\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Element to Search : ");
    scanf("%d",&key);
    int index=linearSearch(arr,n,key);
    if(index!=-1){
        printf("Element found in %d index",index);
    }
    else{
        printf("Element not found");
    }
}