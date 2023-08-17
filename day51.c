#include<stdio.h>

void main(){
int nums[]={0,1,0,3,0,5,0,7,0,9},numsSize=10;
moveZeroes(nums,numsSize);
}

void moveZeroes(int* nums, int numsSize){
    int j=-1,temp;
    for(int i=0;i<numsSize;i++){
        if(*(nums+i)==0){
          j=i;
          break;
        }
    }
    if(j==-1)
      return;
    for(int i=j+1;i<numsSize;i++){
        if(*(nums+i)!=0){
          temp=*(nums+i);
          *(nums+i)=*(nums+j);
          *(nums+j)=temp;
          j++;
        }
    }
    for(int i=0;i<numsSize;i++){
    printf("%d",*(nums+i));
    }
}
