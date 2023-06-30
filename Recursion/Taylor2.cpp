#include <iostream>
using namespace std;

double taylor(int x,int n){
 static  double p=1,f=1;
 double r;
 if(n==0)
   return 1;
 else if(n>0){
   r=taylor(x,n-1);
   p=p*x;
   f=f*n;
   return r+p/f;
 }
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
