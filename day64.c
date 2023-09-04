#include<stdio.h>

void main(){
int A[]={-7,1,-5,3,2,-4},N=6;
*A=rearrangeArray(A,N);
for(int i=0;i<N;i++){
printf("%d",A[i]);
}
}
int * rearrangeArray(int* nums, int numsSize){
    int pos[numsSize/2],neg[numsSize/2],j=0,k=0;
     for(int i=0;i<numsSize;i++){
         if(*(nums+i)>0)
           pos[j++]=*(nums+i);
         else
           neg[k++]=*(nums+i);
     }
     int l=0;
     for(int i=0;i<numsSize/2;i++){
         *(nums+(l++))=pos[i];
         *(nums+(l++))=neg[i];
     }
     return nums;
}
