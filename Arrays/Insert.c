#include <stdio.h>
#include <stdlib.h>

struct Array{
 int *A;
 int size;
 int length;
};

void insert(struct Array *arr,int index,int ele) {
 if(index>=0 && index<=arr->length){
   for(int i=arr->length;i>index;i--)
    arr->A[i]=arr->A[i-1];
 arr->A[index]=ele;
 arr->length++;
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

 insert(&arr,index,ele);
 display(arr);

 return 0;
}
