#include<stdio.h>

void main(){
int arr[]={0,1,0,3,0,5,0,7,0,9},numsSize=10,k=3;
leftRotate(arr,numsSize,k);
}

void leftRotate(int arr[], int n, int d) {
    // code here
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }
}

void reverse(int arr[], int i, int j) {
    int temp;
        while(i<=j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
        }
}
