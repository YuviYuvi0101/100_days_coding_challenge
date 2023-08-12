#include<stdio.h>
void main(){
 int num,temp,rem=0,ans=0;
 scanf("%d",&num);
 temp=num;
 while(temp>0){
   rem=temp%10;
   ans+=rem*rem*rem;
   temp/=10;
 }
 if(ans==num)
    printf("Yes");
 else
    printf("No");

}
