#include<stdio.h>

void main(){
int nums[]={0,1,1,1,1,0,1,1},n=8;
printf("%d",findMaxConsecutiveOnes(nums,n));
}
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int j=0,temp=0;
    for(int i=0;i<numsSize;i++){
        if(*(nums+i)==1)
          j++;
        else
          j=0;
        if(j>temp)
          temp=j;
    }
    return temp;

}
