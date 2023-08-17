//Bubble sort algorithm
#include<stdio.h>
void main(){
int arr[]={4,10,5,2,22,99,23,18,62,9,11};
int i,j,temp;
for(i=0;i<(sizeof(arr)/4)-1;i++){
    for(j=0;j<(sizeof(arr)/4)-i-1;j++){
        if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
        }
        }
for(i=0;i<(sizeof(arr)/4);i++){
    printf("%d\n",arr[i]);
    }
    }
