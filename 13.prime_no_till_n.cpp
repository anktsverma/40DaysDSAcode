#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int f=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            f=1;
           return false;
           break;
        }
          
    }
    if(f==0){
        return true;
    }
    
}
 
int main(){
   int n;
   cin>>n;
   for(int i=2;i<=n;i++){
       if(isPrime(i))
        cout<<i<<" ";
       else{
           continue;
       }
   }
   
   return 0;
}