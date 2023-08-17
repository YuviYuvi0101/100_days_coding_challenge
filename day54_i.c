#include<stdio.h>

void main(){
int nums[]={0,1,2,4},n=4;
printf("%d",missingNumber(nums,n));
}


int missingNumber(int* nums, int numsSize){
int sum,S=0;
int n=numsSize;
sum=n*(n+1)/2;
for(int i=0;i<numsSize;i++){
    S+=*(nums+i);
}
return sum-S;
}
