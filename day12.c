#include <stdio.h>

int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t){
	    scanf("%d %d",&a,&b);
	    if((10*a)>(5*b))
	    printf("\nFIRST");
	    else if((10*a)<(5*b))
	    printf("\nSECOND");
	    else
	    printf("\nANY");
	    t--;
	    	}
	return 0;
}

