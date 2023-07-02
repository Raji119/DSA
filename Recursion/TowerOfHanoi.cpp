#include <iostream>
using namespace std;

int mv(int n,int A,int B,int C){
 if(n>0){
      mv(n-1,A,C,B);
      cout<<"From : ("<<A<<","<<C<<")\n";
      mv(n-1,B,A,C);
  }
}



int main(){
 int n,r;
 std::cout<<"Enter n:";
 std::cin>>n;
 mv(n,1,2,3);
 return 0;
}
