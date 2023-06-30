#include <iostream>
using namespace std;

int func(int n){
 if(n>100)
  return n-10;
 else
  return func(func(n+11));
}



int main(){
 int n;
 std::cout<<"Enter a Number:";
 std::cin>>n;
 cout<<func(n);
 return 0;
}
