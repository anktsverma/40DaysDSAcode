
#include<iostream>
using namespace std;

void waveSort(int arr[],int n){
   for(int i=0;i<n;i+=2){
       if( i>0 && arr[i-1]>arr[i]){
        swap(arr[i-1],arr[i]);
       }
       if(i<n-1 && arr[i+1]>arr[i]){
        swap(arr[i+1],arr[i]);
       }
   }
}

void display(int arr[],int n){
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){
  int arr[]={5,4,1,3,2};
  int n=sizeof(arr)/sizeof(int);
  cout<<"Unsorted Array"<<endl;
  display(arr,n);
  waveSort(arr,n);
  cout<<endl<<"Sorted Array"<<endl;
  display(arr,n);
  return 0;
}
