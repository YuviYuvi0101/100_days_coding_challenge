//majority element in the array
#include<stdio.h>

void main(){
int A[]={2,2,1,1,1,1,2},N=7;
printf("%d",majorityElement(A,N));
}

int majorityElement(int* nums, int numsSize){
int i;
for(i=0;i<numsSize;i++){
    int count=0;
    for(int j=i;j<numsSize;j++){
        if(*(nums+i)==*(nums+j))
           count++;
    }
    if(count>numsSize/2){
       break;
    }
}
return *(nums+i);
}
