void main(){
int A[]={2,2,3,3,0,-1,2},N=7;
printf("%d",maxSubArray(A,N));
}

int maxSubArray(int* nums, int numsSize){
int maxsum=*nums;
for(int i=0;i<numsSize;i++){
    int sum=0;
    for(int j=i;j<numsSize;j++){
        sum+=*(nums+j);
        if(sum>maxsum)
          maxsum=sum;
    }
}
return maxsum;
}
