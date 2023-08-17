//Insertion sort algorithm
#include<stdio.h>
void main(){
int arr[]={4,10,5,2,22,99,23,18,62,9,11};
int i,j,temp;
for(i=1;i<(sizeof(arr)/4);i++){
    for(j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
          temp=arr[j];
          arr[j]=arr[j-1];
          arr[j-1]=temp;
        }
        else
          break;
          }
}
for(i=0;i<(sizeof(arr)/4);i++){
    printf("%d\n",arr[i]);
    }
    }
