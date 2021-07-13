#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n,int key){
   int s=0;
   int e=n-1;
   int mid;
   while(s<=e){
        mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
   }
   return -1;

}

int main(){
   int arr[]={2,1,4,9,8,11,3};
   int n=sizeof(arr)/sizeof(int);
   int key;
   cin>>key;
   int c=binary_search(arr,n,key);
   if(c==-1){
    cout<<key<<" Not Found"<<endl;
   }
   else{
    cout<<key<<" Found at Index " <<c<<endl;
   }

   return 0;
}
