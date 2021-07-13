#include<iostream>
#include<algorithm>

using namespace std;

bool comp(int a,int b){
   return a>b;
}

int main(){

  int a[]={1,3,5,0,8,2};
  int n=sizeof(a)/sizeof(int);

  sort(a,a+n,comp);

  for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
  }
  return 0;
  }
