#include<stdio.h>
#include<math.h>

void main(){
	int i,j,k,n;
	scanf("%d",&n);
	k=2*n-1;
	for(i=0;i<k;i++){
       for(j=0;j<k;j++){
           if(abs(i-k/2)>abs(j-k/2))
              printf("%d ",abs(i-k/2)+1);
           else
              printf("%d ",abs(j-k/2)+1);
       }
       printf("\n");
       }
       }
