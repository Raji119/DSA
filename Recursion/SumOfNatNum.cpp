#include <iostream>
using namespace std;

int func(int n){
 if(n>0)
  return func(n-1)+n;
}


int main(){
 int n;
 std::cout<<"Enter a Number:";
 std::cin>>n;
 std::cout<<"Sum="<<func(n);
 return 0;
}
