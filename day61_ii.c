void main(){
int A[]={2,2,3,3,3,3,2},N=7;
printf("%d",majorityElement(A,N));
}

int majorityElement(int* nums, int numsSize){
int count=0,ele;
for(int i=0;i<numsSize;i++){
   if(count==0){
     count=1;
     ele=*(nums+i);
   }
   else if(ele==*(nums+i))
     count++;
   else
     count--;
}
return ele;
}
