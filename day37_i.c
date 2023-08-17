#include<stdio.h>
void main(){
  int N;
  scanf("%d",&N);
  printf("%d",factorial(N));
  }

int factorial(int N){
 int i,fact=1;
 if(N<0)
    return 0;
 else if(N==0)
    return 1;
 else{
    for(i=N;i>=1;i--){
        fact*=i;
    }
    return fact;
 }
}
