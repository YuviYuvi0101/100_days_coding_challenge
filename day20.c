#include<stdio.h>

int main(){
    int t,x,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        if(x%10 == 0)
        printf("%d\n",x/10);
        else if(x%5 == 0){
        a=x/10;
        a=a+(x%10)/5;
        printf("%d\n",a);
        }
        else
        printf("-1\n");
    }
    return 0;
}