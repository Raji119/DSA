#include <iostream>
using namespace std;

double taylor(int x,int n){
 static double s=1;
 if(n==0)
   return 1;
 s=1+x*s/double(n);
 return taylor(x,n-1);
}

int main(){
 int x,n;
 std::cout<<"Enter x:";
 std::cin>>x;
 std::cout<<"Enter n:";
 std::cin>>n;
 std::cout<<"Result="<<taylor(x,n);
 return 0;
}
