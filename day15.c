#include <stdio.h>

int main(void) {
	int t,n,c;
	scanf("%d",&t);
	while(t){
	    scanf("%d",&n);
	    c=n/4;
	    if(n%4 != 0)
	    c+=1;
	    printf("\n%d",c);
	    t--;
	}
	return 0;
}

