#include<stdio.h>

void main(){
int nums[]={0,1,3,4},n=4;
printf("%d",missingNumber(nums,n));
}

int missingNumber(int nums[],int n){

int hash[n+1];
for(int i=0;i<n;i++){
    hash[nums[i]]++;
    }
for(int i=0;i<n+1;i++){
    if(hash[i]==0)
       return i;
       }
}
