//Function to sort an array using quick sort algorithm.

#include<stdio.h>
void main(){
int arr[]={1,6,5,3,9,3};
int low=0,high=4;
quicksort(arr,low,high);
}

void quicksort(int arr[], int low, int high)
{
    // code here
    int pindex,l,h;
    if(low<high){
    pindex=partition(arr,low,high);
    h=pindex-1;
    l=pindex+1;
    quicksort(arr,low,h);
    quicksort(arr,l,high);
    }

    for(int i=0;i<high;i++){
    printf("%d\n",arr[i]);
    }

}

int partition (int arr[], int low, int high)
{
   // Your code here
   int pivot,i,j,temp;
   pivot=arr[low];
   i=low;
   j=high;
   while(i<j){
       while(arr[pivot]<=arr[i] && i<=high){
           i++;
       }
       while(arr[pivot]>arr[j] && j>=low){
           j--;
       }
       if(i<j){
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
   }
    temp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp;
    return j;
}


