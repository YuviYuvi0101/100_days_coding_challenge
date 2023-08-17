//largest element in an array

#include<stdio.h>

void main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("%d",largest(a,n));
}

int largest(int arr[], int n) {
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest)
          largest=arr[i];
    }
    return largest;
}

