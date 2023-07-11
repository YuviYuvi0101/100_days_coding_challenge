#include <stdio.h>

int main(void) {
	int t,n,m;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&m);
	    if(m>n)
	    printf("%d\n",n);
	    else
	    printf("%d\n",2*(n-m)+m);
	}
	return 0;
}

