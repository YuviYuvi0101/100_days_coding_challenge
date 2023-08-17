//sum of divisors

#include<stdio.h>

void main(){
int n;
scanf("%d",&n);
printf("%d",sumofdiv(n));
}

int sumofdiv(int n){
int f=0,temp=n;
while(temp>0){
for(int i=1;i<=temp;i++){
if(temp%i == 0){
f+=i;
}
}
temp--;
}
return f;
}




