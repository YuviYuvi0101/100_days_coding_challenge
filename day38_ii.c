#include<stdio.h>
void main(){
  int N,rem,i=0,res=0,pow=1;
  scanf("%d",&N);
  while(N>0){
  rem=N%10;
  res+=rem*pow;
  pow*=2;
  N/=10;
  i++;
  }
  printf("%d",res);
  }
