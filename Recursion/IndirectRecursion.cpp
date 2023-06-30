#include <iostream>
using namespace std;

void funcB(int n);

void funcA(int n){
 if(n>0){
  std::cout<<n<<" ";
  funcB(n-1);
 }
}

void funcB(int n){
 if(n>0){
  std::cout<<n<<" ";
  funcA(n/2);
 }
}

int main(){
 int n;
 std::cout<<"Enter a Number:";
 std::cin>>n;
 funcA(n);
 return 0;
}
