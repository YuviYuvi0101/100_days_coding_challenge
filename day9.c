#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t){
	    int c,x,y;
	    scanf("%d %d %d",&c,&x,&y);
	    printf("\n%d",(c-x)*y);
	    t--;
	}
	return 0;
}

