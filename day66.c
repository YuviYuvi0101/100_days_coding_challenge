#include<stdio.h>

void main(){
    int n = 6;
    int arr[] = {10, 22, 12, 3, 0, 6};
    int *ans;
    ans = printLeaders(arr, n);

    for(int i=(sizeof(ans)/4)-1;i>=0;i--){
    printf("%d ",ans[i]);
    }

 }





int printLeaders(int * arr,int n){
    int ans[n], k=1;


    int max_elem = arr[n - 1];
    ans[0] = arr[n - 1];


    for(int i=n-2;i>-1;i--){
        if(arr[i] > max_elem){
            ans[k++] = arr[i];
            max_elem = arr[i];
            }
            }

    return ans;
    }


