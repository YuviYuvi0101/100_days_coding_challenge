//Merge sort algorithm
#include<stdio.h>
void main(){
int arr[]={4,10,5,2,22,99,23,18,62,9,11};
Mergesort(arr);
}

void Mergesort(int arr[]){
     int N,m,i;
     N=sizeof(arr)/4;
     if(N<2)
       return;
     m=N/2;
     int l[m],r[N-m];
     for(i=0;i<m;i++){
         l[i]=arr[i];
     }
     for(i=m;i<N;i++){
         r[i-m]=arr[i];
     }
     Mergesort(l);
     Mergesort(r);
     Merge(l,r,arr);

     }

void Merge(int l[],int r[],int arr[]){
int i=0,j=0,k=0,nl,nr;
nl=sizeof(l)/4;
nr=sizeof(r)/4;
while(i<nl && j<nr){
    if(l[i]<r[j]){
    arr[k]=l[i];
    k++;
    i++;
    }
    else{
    arr[k]=r[j];
    k++;
    j++;
    }

}
while(i<nl){
    arr[k]=l[i];
    k++;
    i++;
}
while(j<nr){
    arr[k]=r[j];
    k++;
    j++;
}
}
