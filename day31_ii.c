#include<stdio.h>

void main(){
	int i,j,k,n,m;
	scanf("%d",&m);
	n=m/2;
	for(i=n;i>=1;i--){
       for(j=1;j<=i;j++){
           printf("*");
       }
       for(k=1;k<=2*(n-i);k++){
           printf(" ");
       }
       for(j=1;j<=i;j++){
           printf("*");
       }
       printf("\n");
	}
	for(i=1;i<=n;i++){
	    for(j=1;j<=i;j++){
	        printf("*");
	    }
        for(k=1;k<=2*(n-i);k++){
            printf(" ");
	    }
	    for(j=i;j>=1;j--){
	        printf("*");
	    }
	    printf("\n");
	}
	}
