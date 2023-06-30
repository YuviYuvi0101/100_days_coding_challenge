#include <stdio.h>

int main(void) {
	// your code goes here
	int i,T,X[100],K[100];
	scanf("%d",&T);
	for(i=0;i<T;i++){
	scanf("%d %d",&X[i],&K[i]);
	}
	for(i=0;i<T;i++){
	printf("\n%d",X[i]-K[i]);
	}
	return 0;
}

