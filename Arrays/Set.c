#include <stdio.h>
#include <stdlib.h>

struct Array{
 int *A;
 int size;
 int length;
};

void set(struct Array *arr,int index,int ele) {
 if(index>=0 && index<arr->length)
    arr->A[index]=ele;
}

void display(struct Array arr){
 int i;
 printf("\nThe Elements are:\n");
 for(i=0;i<arr.length;i++)
  printf("%d ",arr.A[i]);
}


int main(){
 struct Array arr;
int index,i,ele;
 printf("Enter Size of an Array:");
 scanf("%d",&arr.size);

 arr.A=(int *)malloc(arr.size*sizeof(int));

 printf("Enter Array Limit:");
 scanf("%d",&arr.length);
 printf("Enter All Elements:");
 for(i=0;i<arr.length;i++)
  scanf("%d",&arr.A[i]);
 
 display(arr);
 printf("Enter Index of Element to be Inserted:");
 scanf("%d",&index);
 printf("Enter Element to be Inserted:");
 scanf("%d",&ele);

 set(&arr,index,ele);
 display(arr);
 return 0;
}
