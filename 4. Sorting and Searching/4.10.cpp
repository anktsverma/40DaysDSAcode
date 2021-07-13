#include<iostream>
using namespace std;

float sqrt(int n,int p){
    int s=0,e=n-1,mid;
    float ans=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid<n){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    float dec=0.1;
    for(int i=0;i<p;i++){
        while(ans*ans<=n)
          ans=ans+dec;
        ans=ans-dec;
        dec=dec/10.0;
    }

    return ans;
}

int main(){
  cout<<sqrt(49,2)<<endl;;
  cout<<sqrt(10,4)<<endl;

  return 0;
  }
