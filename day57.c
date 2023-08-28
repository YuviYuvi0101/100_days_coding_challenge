#include<stdio.h>
#include<math.h>

void main(){
int nums[]={1,2,1,2,1},n=5,k=3;
printf("%d",subarraySum(nums,n,k));
}
int subarraySum(int* nums, int numsSize, int k){
int c=0;
for(int i=0;i<numsSize;i++){
   for(int j=i;j<numsSize;j++){
        int n=0;
        for(int p=i;p<=j;p++){
           n+=*(nums+p);
        }
        if(n==k)
             c++s;
}
}
return c;
}

int max(int i,int j){
if(i>j)
    return i;
else
    return j;
}
