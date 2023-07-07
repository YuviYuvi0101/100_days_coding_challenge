#include <stdio.h>

int main(void) {
	int t,x,a,b;
	scanf("%d",&t);
	while(t){
	    scanf("%d %d %d",&x,&a,&b);
	    if((a+2*b)>=x)
	    printf("\nQualify");
	    else
	    printf("\nNotQualify");
	    t--;
	}
	return 0;
}

