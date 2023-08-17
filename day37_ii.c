#include<stdio.h>
void main(){
  int N;
  scanf("%d",&N);
  printf("%d",fib(N));
  }

int fib(int n){
    int a=0,b=1,c;
    if(n==0 || n==1)
      return n;
    else{
      while(n>1){
          c=a+b;
          a=b;
          b=c;
          n--;
      }
      return c;
    }
    }
