#include<stdio.h>
void main(){
  int N;
  scanf("%d",&N);
  printf("%d",fib(N));
  }

int fib(int n){
    if(n==0 || n==1)
      return n;
    else
      return fib(n-1)+fib(n-2);

}
