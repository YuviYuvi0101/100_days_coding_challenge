#include<stdio.h>
void main(){
  int n;
  scanf("%d",&n);
  isPalindrome(n);
  }

void isPalindrome(int x){
    int temp=x,rem,rev=0;
    if(temp<0)
      printf("false");
    while(temp>0){
         rem=temp%10;
         rev=rev*10+rem;
         temp/=10;
    }
    if(rev==x)
        printf("true");
}

