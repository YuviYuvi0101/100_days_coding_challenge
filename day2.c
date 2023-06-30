#include <stdio.h>

int main(void) {
	// your code goes here
	int i,T,N[1000];
	scanf("%d",&T);
	
	for(i=0;i<T;i++){
	scanf("%d",&N[i]);
	}
	for(i=0;i<T;i++){
	printf("\n%d",2*N[i]);
	}
	
	return 0;
}

