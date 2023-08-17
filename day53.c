#include<stdio.h>

void main(){
int i,size1,size2,size,j=0,k;
   printf("Enter size of an array1");
   scanf("%d",&size1);
   printf("\nEnter size of an array2");
   scanf("%d",&size2);
   int a[size1],b[size2],uni[size1+size2];
   printf("\nEnter numbers for array 1");
   for(i=0;i<size1;i++){
      scanf("%d",&a[i]);
   }
   printf("\nEnter numbers for array 2");
   for(i=0;i<size2;i++){
      scanf("%d",&b[i]);
   }
   //union start
   for(i=0;i<size1;i++){
      uni[j]=a[i];
      j++;
   }
   for(i=0;i<size2;i++){
      uni[j]=b[i];
      j++;
   }
   removerepeated(size1+size2,uni);
   }

   void removerepeated(int size,int a[]){
   int i,j,k;
   for(i=0;i<size;i++){
      for(j=i+1;j<size;){
         if(a[i]==a[j]){
            for(k=j;k<size;k++){
               a[k]=a[k+1];
            }
            size--;
         }else{
            j++;
         }
      }
   }
   for(i=0;i<size;i++){
   printf("\n%d",a[i]);
   }

}
