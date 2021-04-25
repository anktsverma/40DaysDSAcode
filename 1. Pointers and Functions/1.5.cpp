#include<iostream>
using namespace std;

int fact(int a){
    int fac=1;
    for(int i=2;i<=a;i++){
        fac*=i;
    }
    return fac;
}

int ncr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){
    int n,r;
    cin>>n>>r;
    int t=ncr(n,r);
    cout<<t<<endl;
    return 0;
}