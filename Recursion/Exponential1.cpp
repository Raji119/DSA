#include <iostream>
using namespace std;

float pow(int m,int n){
 if(n==0)
   return 1;
 else if(n>0)
   return pow(m,n-1)*m;
 else 
   return pow(m,n+1)*float(1.0/m);
}

int main(){
 int m,n;
 std::cout<<"Enter Base:";
 std::cin>>m;
 std::cout<<"Enter Exponent:";
 std::cin>>n;
 std::cout<<"Power="<<pow(m,n);
 return 0;
}
