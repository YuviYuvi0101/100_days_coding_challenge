#include<stdio.h>

void main(){
int A[]={2,7,11,15},target=26,n=4;
int *arr;
arr=twosum(A,n,target);
for(int i=0;i<2;i++){
    printf("%d\n",*arr);
}
}
*int twosum(int A[],int n,int target){
    int sum,arr[2];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=A[i]+A[j];
            if(sum==target){
               arr[0]=i;
               arr[1]=j;
               break;
               }
            }
            }
        for(int i=0;i<2;i++)
            printf("%d\n",arr[i]);
        return arr;
}
