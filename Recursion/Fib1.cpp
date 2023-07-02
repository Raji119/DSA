#include <iostream>
using namespace std;

int fib(int n){
 if(n<=1)
  return n;
 return fib(n-2)+fib(n-1);
}



int main(){
 int n;
 std::cout<<"Enter a Number:";
 std::cin>>n;
 cout<<fib(n);
 return 0;
}
