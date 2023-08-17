#include<stdio.h>

void main(){
int nums[]={0,1,2,3,4,5,6,7,8,9},numsSize=10,k=5;
rotate(nums,numsSize,k);
}
void rotate(int* nums, int numsSize, int k){
    int temp;
    for(int i=0;i<k;i++){
        temp=*(nums+numsSize-1);
    for(int j=numsSize-1;j>0;j--){
        *(nums+j)=*(nums+j-1);
    }
    *nums=temp;
    }
    for(int i=0;i<numsSize;i++){
    printf("%d",*(nums+i));
    }


}
