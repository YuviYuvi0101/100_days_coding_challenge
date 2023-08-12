#include<stdio.h>
void main(){
  int n;
  scanf("%d",&n);
  isprime(n);
  }
void isprime(int n){
  int temp=n,res=0;
  while(--temp){
     if(n%temp==0)
        res+=1;
  }
  if(res>1)
     printf("0");
  else
     printf("1");
}
