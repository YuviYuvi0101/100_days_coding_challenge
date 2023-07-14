#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int i,a[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    while(n){
	      if(a[n-1]!=0){
	      printf("%d\n",n-1);
	      break;
	      }
	      n--;
	    }
	}
	return 0;
}

