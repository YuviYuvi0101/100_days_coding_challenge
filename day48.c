#include<stdio.h>

void main(){
int nums[]={0,0,1,1,1,2,2,3,3,4},numsSize=10,k;
k=removeDuplicates(nums,numsSize);
printf("%d",k);
}

int removeDuplicates(int* nums, int numsSize){
    int i=0;
    for(int j=1;j<numsSize;j++){
        if(*(nums+i)!=*(nums+j)){
            i++;
            *(nums+i)=*(nums+j);
        }
    }
    for(int j=0;j<i+1;j++){
    printf("%d\n",*(nums+j));
    }
    return i+1;

}


