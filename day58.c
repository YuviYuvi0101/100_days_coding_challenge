#include<stdio.h>

void main(){
int A[]={-1,1,1},N=3,K=1;
printf("%d",lenOfLongSubarr(A,N,K));
}

int lenOfLongSubarr(int A[],  int N, int K)
    {
     int temp,c=0;
        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){

                int s=0;
                for(int p=i;p<=j;p++){
                    s+=A[p];
                }
                    if(s==K){
                      temp=j-i+1;
                      if(temp>c)
                        c=temp;
                    }
            }
        }
        // Complete the function
        return c;
    }
