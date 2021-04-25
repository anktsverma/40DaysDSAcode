#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<&a<<endl;

    int b=20;
    cout<<&b<<endl;

    char c='D';
    cout<<&c<<endl;
    
    //assigning pointer the address of variable
    int *xptr=&a;
    cout<<&a<<endl;
    cout<<xptr<<endl;

    //updating the pointer with the address of new variable
    xptr=&b;

    cout<<&b<<endl;
    cout<<xptr<<endl;
    return 0;
}