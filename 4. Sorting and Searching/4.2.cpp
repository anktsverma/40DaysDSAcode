

#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
   for(int i=0;i<n;i++){
    int j=i-1;
    int no=arr[i];
    while(j>=0 && arr[j]>no){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=no;
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
  insertionSort(arr,n);
  cout<<endl<<"Sorted Array"<<endl;
  display(arr,n);
  return 0;
}
