#include <stdio.h>

int main(void) {
	int t,w,p,n;
	scanf("%d",&t);
	while(t){
	    scanf("%d",&w);
	    p=1000*w;
	    n=p/100;
	    printf("\n%d",n);
	    t--;
	}
	return 0;
}

