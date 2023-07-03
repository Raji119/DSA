#include <stdio.h>
#include <stdlib.h>

struct Array{
 int *A;
 int size;
 int length;
};

int Delete(struct Array *arr,int index) {
 int ele;
 if(index>0 && index<=arr->length){
   ele=arr->A[index];
   for(int i=index;i<arr->length;i++)
    arr->A[i]=arr->A[i+1];
 arr->length--;
return ele;
 }
}

void display(struct Array arr){
 int i;
 printf("\nThe Elements are:\n");
 for(i=0;i<arr.length;i++)
  printf("%d ",arr.A[i]);
}


int main(){
 struct Array arr;
 int index,i;
 printf("Enter Size of an Array:");
 scanf("%d",&arr.size);

 arr.A=(int *)malloc(arr.size*sizeof(int));

 printf("Enter Array Limit:");
 scanf("%d",&arr.length);
 printf("Enter All Elements:");
 for(i=0;i<arr.length;i++)
  scanf("%d",&arr.A[i]);
 
 display(arr);
 printf("Enter Index of Element to be Deleted:");
 scanf("%d",&index);

 printf("\nDeleted:%d",Delete(&arr,index));
 display(arr);
 return 0;
}
