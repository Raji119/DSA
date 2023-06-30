#include <iostream>
using namespace std;

void func(int n){
 if(n>0){
  cout<<n<<" ";
  func(n-1);
  func(n-1);
}
}



int main(){
 int n;
 std::cout<<"Enter a Number:";
 std::cin>>n;
 func(n);
 return 0;
}
