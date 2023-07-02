#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t){
	    scanf("%d %d",&x,&y);
	    printf("\n%d",(10*x)+(5*y));
	    t--;
	}
	return 0;
}

