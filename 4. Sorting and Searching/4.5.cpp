#include<iostream>
#include<algorithm>

using namespace std;

bool comp(int a,int b){

return a>b;
}

int main(){
   int arr[]={7,8,2,9,3,11};
   int n=sizeof(arr)/sizeof(int);
   sort(arr,arr+n,comp);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

   return 0;
   }
