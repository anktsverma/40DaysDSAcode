#include<bits/stdc++.h>
using namespace std;

int searchr(int a[],int s,int e,int key){
   int mid;
   if(s>e){
    return -1;
   }
   mid=(s+e)/2;
   if(a[mid]==key){
    return mid;
   }
   //left part of rotation
   if(a[s]<=a[mid]){
      //left part
      if(key<=a[mid] && key>=2a[s]){
        return searchr(a,s,mid-1,key);
      }
      //right part
      else{
        return searchr(a,mid+1,e,key);
      }

   }

   //right part of rotation
   if(key<=a[e] && key<=a[mid]){
        //left part
    return searchr(a,mid+1,e,key);
   }
      //right part
   return searchr(a,s,mid-1,key);

}


int main(){
   int a[]={5,6,7,1,2,3,4};
   int key;
   cin>>key;
   if(searchr(a,0,6,key)==-1){
    cout<<key<<" Not  Found at required index"<<endl;
   }
   else{
    cout<<key<<" Key Found at index "<<searchr(a,0,6,key)<<endl;
   }

   return 0;
   }
