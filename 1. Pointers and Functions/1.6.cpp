#include<iostream>
using namespace std;

int fun(int a){
    a++;
    cout<<"Inside Function: "<<a<<endl;
}

int main(){
   int a=10;
   fun(a);
   cout<<"Inside Main: "<<a<<endl;
   return 0;
}