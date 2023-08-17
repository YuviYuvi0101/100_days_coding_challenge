#include<stdio.h>
void main(){
  int N;
  scanf("%d",&N);
  int a[32],i=0,j;
  while(N>0){
  a[i]=N%2;
  N/=2;
  i++;
  }
  for(j=i-1;j>=0;j--){
     printf("%d",a[j]);
  }
  }
