#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    float s,d,h,g;
	    scanf("%f",&s);
	    if(s<1500){
	        h=0.1*s;
	        d=0.9*s;
	    }
	    else{
	        h=500;
	        d=0.98*s;
	    }
	    printf("%0.2f\n",s+h+d);
	}
	return 0;
}

