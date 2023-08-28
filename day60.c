#include<stdio.h>

void main(){
int A[]={2,1,0,2,1,0},N=6;
sortColors(A,N);
}
void sortColors(int* nums, int numsSize){
    int low=0,mid=0,high=numsSize-1;
    for(mid=0;mid<=high;){
        int temp;
        if(*(nums+mid)==0){
            temp=*(nums+low);
            *(nums+low)=*(nums+mid);
            *(nums+mid)=temp;
            low++;
            mid++;
        }
        else if(*(nums+mid)==1){
            mid++;
        }
        else{
            temp=*(nums+high);
            *(nums+high)=*(nums+mid);
            *(nums+mid)=temp;
            high--;
        }
    }
    for(int i=0;i<numsSize;i++){
        printf("%d",*(nums+i));
    }

}
