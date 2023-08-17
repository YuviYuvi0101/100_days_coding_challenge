#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,x,c=0;
	scanf("%d\n",&t);
	while(t--){
	    scanf("%d\n",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d ",&a[i]);
	    }
	    scanf("\n%d",&x);
	    for(int i=0;i<n;i++){
	        if(a[i]==x)
	          c++;
	    }
	        if(c>0)
	          printf("Yes");
	        else
	          printf("No");
	    }
	return 0;
}


