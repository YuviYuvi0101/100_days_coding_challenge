#include <stdio.h>

int main(void) {
	int t;
	float j,n,m,k;
	scanf("%d",&t);
	while(t){
	scanf("%f %f %f",&n,&m,&k);   
	j=n/k;
	if(j<=m)
	printf("\nYes");
	else
	printf("\nNo");
	t--;
	}
	return 0;
}

