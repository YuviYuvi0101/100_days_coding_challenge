#include <stdio.h>

int main(void) {
	int t,n,v;
	scanf("%d",&t);
	while(t){
	    scanf("%d",&n);
	    v=n%4;
	    if(v==0)
	      printf("\nGood");
	    else
	      printf("\nNot Good");
	    t--;
	}
	return 0;
}

