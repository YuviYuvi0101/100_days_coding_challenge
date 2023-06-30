#include<stdio.h>

int main(void){
int i,T,X[1000],Y[1000],Z[1000],V[1000];
scanf("%d",&T);
for(i=0;i<T;i++){
scanf("%d %d %d",&X[i],&Y[i],&Z[i]);
V[i]=X[i]*Y[i]*Z[i];
}
for(i=0;i<T;i++){
printf("\n%d",V[i]);
}
return 0;
}

