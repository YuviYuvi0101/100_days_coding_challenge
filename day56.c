#include<stdio.h>

void main(){
int nums[]={0,0,1,1,2,2,3},numsSize=7;
printf("%d",singleNumber(nums,numsSize));
}

int singleNumber(int* nums, int numsSize){
    int temp=*nums;
    for(int i=1;i<numsSize;i++){
        temp^=*(nums+i);
    }
    return temp;

}
