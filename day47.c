#include<stdio.h>

void main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
check(a,n);
}

void check(int* nums, int numsSize){
    int c=0;
    for(int i=0;i<numsSize;i++){
        int a=(i+1)%numsSize;
        if(nums[i] > nums[a])
        c++;
    }
    if(c<=1)
      printf("true");
    else
      printf("false");

}
