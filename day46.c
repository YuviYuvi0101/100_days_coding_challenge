//second largest element in an array

#include<stdio.h>

void main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("%d",sec_largest(a,n));
}

int sec_largest(int arr[], int n){
   	int largest=arr[0],second=-1;
    for(int i=1;i<n;i++){
    if(arr[i]>largest){
        second=largest;
        largest=arr[i];
    }
    else{
        if(arr[i]>second && arr[i]<largest)
           second=arr[i];
    }
	}
	return second;
}
