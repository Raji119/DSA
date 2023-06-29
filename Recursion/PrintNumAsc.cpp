#include <iostream>
using namespace std;

void func(int n){
 if(n>0){
  func(n-1);
  std::cout<<n<<"\n";
 }
}

int main(){
 int n;
 std::cout<<"Enter a Number:";
 std::cin>>n;
 func(n);
 return 0;
}
