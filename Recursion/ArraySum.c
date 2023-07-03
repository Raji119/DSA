#include <stdio.h>
#include <stdlib.h>

struct Array{
 int *A;
 int size;
 int length;
};

void display(struct Array arr){
 int i;
 printf("The Elements are:\n");
 for(i=0;i<arr.length;i++)
  printf("%d ",arr.A[i]);
}

int sum(struct Array arr,int len){
 if(len<0)
  return 0;
 else
  return sum(arr,len-1)+arr.A[len];
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
 printf("\nSum=%d",sum(arr,arr.length)); 
 return 0;

}


