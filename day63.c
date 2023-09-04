#include<stdio.h>

void main(){
int A[]={7,1,5,3,8,4},N=6;
printf("%d",maxProfit(A,N));
}

int maxProfit(int* prices, int pricesSize){
    int max=0;
    for(int i=0;i<pricesSize;i++){
        for(int j=i;j<pricesSize;j++){
            if(*(prices+j)-*(prices+i)>max)
              max=*(prices+j)-*(prices+i);
        }
    }
    return max;
}
