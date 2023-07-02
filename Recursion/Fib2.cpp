#include <iostream>
using namespace std;

int f[10];

int fib(int n){
 if(n<=1){
  return n;
 }
 else{
  if(f[n-2]==-1)
    f[n-2]=fib(n-2);
  if(f[n-1]==-1)
    f[n-1]=fib(n-1);
 return f[n-2]+f[n-1];
 }
}



int main(){
 int n;
 std::cout<<"Enter a Number:";
 std::cin>>n;
 for(int i=1;i<=10;i++)
  f[i]=-1;
 cout<<fib(n);
 return 0;
}
