
#include<bits/stdc++.h>
using namespace std;

int binary_search_lowerBound(int arr[],int n,int key){
   int s=0;
   int e=n-1;
   int mid;
   int ans=-1;
   while(s<=e){
        mid=(s+e)/2;
    if(arr[mid]==key){
        ans=mid;
        e=mid-1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
   }
   return ans;

}

int main(){
   int arr[]={2,2,2,9,8,11,3};
   int n=sizeof(arr)/sizeof(int);
   int key;
   cin>>key;
   int c=binary_search_lowerBound(arr,n,key);
   if(c==-1){
    cout<<key<<" Not Found"<<endl;
   }
   else{
    cout<<key<<" First Occurence  Found at Index " <<c<<endl;
   }

   return 0;
}
