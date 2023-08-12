#include<stdio.h>
void main(){
  int N;
  scanf("%d",&N);
  printf("%d",factorial(N));
  }

int factorial(int N){
 if(N<0)
    return 0;
 else if(N==0)
    return 1;
 else
    return N*factorial(N-1);
}
