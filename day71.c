int subarraySum(int* nums, int numsSize, int k){
int c=0;
for(int i=0;i<numsSize;i++){
   for(int j=i;j<numsSize;j++){
        int n=0;
        for(int p=i;p<=j;p++){
           n+=*(nums+p);
        }
        if(n==k)
             c++;
}
}
return c;
}


