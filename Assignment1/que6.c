//1.	Binary search
//Iterative
#include<stdio.h>
int binarySearch(int A[],int n,int key){
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(A[mid]==key){
            return mid;
        }
        else if (A[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
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
    int index=binarySearch(arr,n,key);
    if(index!=-1){
        printf("Element found in %d index",index);
    }
    else{
        printf("Element not found");
    }
}
//recursive
#include<stdio.h>
int binarySearch(int A[],int low,int high,int key){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(A[mid]==key){
            return mid;
        }
        else if (A[mid]>key){
            return binarySearch(A,low,mid-1,key);
        }
        else{
            return binarySearch(A,mid+1,high,key);
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
    int index=binarySearch(arr,0,n-1,key);
    if(index!=-1){
        printf("Element found in %d index",index);
    }
    else{
        printf("Element not found");
    }
}