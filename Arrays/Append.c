#include <stdio.h>
#include <stdlib.h>

struct Array{
 int *A;
 int size;
 int length;
};

void append(struct Array *arr,int ele) {
 if(arr->length<arr->size)
  arr->A[arr->length++]=ele;
}

void display(struct Array arr){
 int i;
 printf("\nThe Elements are:\n");
 for(i=0;i<arr.length;i++)
  printf("%d ",arr.A[i]);
}


int main(){
 struct Array arr;
 int ele,i;
 printf("Enter Size of an Array:");
 scanf("%d",&arr.size);

 arr.A=(int *)malloc(arr.size*sizeof(int));

 printf("Enter Array Limit:");
 scanf("%d",&arr.length);
 printf("Enter All Elements:");
 for(i=0;i<arr.length;i++)
  scanf("%d",&arr.A[i]);
 
 display(arr);
 printf("Enter Element to be Appended:");
 scanf("%d",&ele);

 append(&arr,ele);
 display(arr);
 return 0;
}
