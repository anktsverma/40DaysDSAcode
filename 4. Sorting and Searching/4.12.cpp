#include<iostream>
using namespace std;

int main(){

   int arr[]={6,7,8,9,1,2,3,4,5};
   int n=sizeof(arr)/sizeof(int);
   int mid;
   int s=0,e=n-1;
   for(;s<=e;){
     mid=(s+e)/2;
     if(arr[mid]<arr[mid-1] && mid>s){
        cout<<mid-1<<endl;
        break;
     }
     if(arr[mid]>arr[mid+1]&& mid<e){
        cout<<mid<<endl;
        break;
     }
     if(arr[s]>=arr[mid]){
        e=mid-1;
     }
     else{
        s=mid+1;
     }

   }

   return 0;
   }
