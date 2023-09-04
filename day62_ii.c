void main(){
int A[]={2,2,3,3,0,-1},N=6;
printf("%d",maxSubArray(A,N));
}

int maxSubArray(int* nums, int numsSize){
int maxsum=-2147483647,sum=0;
for(int i=0;i<numsSize;i++){
        sum+=*(nums+i);
        if(sum>maxsum)
          maxsum=sum;
        if(sum<0){
          sum=0;
        }
    }
return maxsum;
}
