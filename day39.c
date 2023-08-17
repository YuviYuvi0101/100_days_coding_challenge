//selection sort algorithm
#include<stdio.h>
void main(){
int arr[]={4,10,5,2,22,5,9,11};
int i,j,small;
for(j=0;j<sizeof(arr)/4;j++){
   small=arr[j];
        for(i=j+1;i<sizeof(arr)/4;i++){
            if(arr[i]<small){
               small=arr[i];
               arr[i]=arr[j];
               arr[j]=small;
            }
}
}
for(j=0;j<sizeof(arr)/4;j++){
        printf("%d\n",arr[j]);
}
}
