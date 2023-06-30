#include <iostream>
using namespace std;

int fact(int n){
 if(n==0)
   return 1;
 else
  return fact(n-1)*n;
}

int main(){
 int n;
 std::cout<<"Enter a Number:";
 std::cin>>n;
 std::cout<<"Factorial="<<fact(n);
 return 0;
}
