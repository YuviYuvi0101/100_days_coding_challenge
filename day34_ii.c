int reverse(int x){
    int temp=abs(x),rev=0,rem;
    while(temp){
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if(x<0)
    return rev*(-1);
    else
    return rev;
}

#include<stdio.h>
#include<math.h>
void main(){
int n;
scanf("%d",&n);
printf("%d",reverse(n));
}
