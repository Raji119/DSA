#include <iostream>
using namespace std;

int c(int n,int r){
 if(n==r || r==0)
  return 1;
 return c(n-1,r-1)+c(n-1,r);
}



int main(){
 int n,r;
 std::cout<<"Enter n:";
 std::cin>>n;
 std::cout<<"Enter r:";
 std::cin>>r;
 cout<<c(n,r);
 return 0;
}
