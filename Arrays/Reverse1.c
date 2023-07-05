#include <stdio.h>
#include <stdlib.h>

struct Array{
 int *A;
 int size;
 int length;
};

void display(struct Array arr){
 int i;
 printf("\nThe Elements are:\n");
 for(i=0;i<arr.length;i++)
  printf("%d ",arr.A[i]);
}

void reverse(struct Array *arr){
 int *B,i,j;

 B=(int *)malloc(arr->length*sizeof(int));

 for(i=arr->length-1,j=0;i>=0;i--,j++)
  B[j]=arr->A[i];
 

 for(i=0;i<arr->length;i++)
  arr->A[i]=B[i];
}


int main(){

 struct Array arr;
 int i;

 printf("Enter Size of an Array:");
 scanf("%d",&arr.size);

 arr.A=(int *)malloc(arr.size*sizeof(int));

 printf("Enter Array Limit:");
 scanf("%d",&arr.length);
 printf("Enter All Elements:");
 for(i=0;i<arr.length;i++)
  scanf("%d",&arr.A[i]);

 display(arr);
 reverse(&arr);
 display(arr);
 return 0;

}

