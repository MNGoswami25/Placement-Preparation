//4.	Quick sort
#include<stdio.h>
int partition(int A[],int p,int r){
    int x=A[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
       
    }
     int temp=A[i+1];
        A[i+1]=A[r];
        A[r]=temp;
    return i+1;
}
void quickSort(int A[],int p, int r){
    if(p<r){
        int q=partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}
int main(){
    int arr[50],n;
    printf("Enter size of an Array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,n-1);
    printf("After Sorting\n ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}