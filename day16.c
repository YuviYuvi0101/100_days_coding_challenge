#include <stdio.h>

int main(void) {
	int  t,n,x;
	scanf("%d",&t);
	while(t){
	    scanf("%d %d",&n,&x);
	    if(x/n>0 && x%n==0)
	    printf("\nYes");
	    else
	    printf("\nNo");
	    t--;
	}
	return 0;
}

