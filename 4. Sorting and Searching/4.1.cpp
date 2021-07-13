
#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    swap(arr[i],arr[min]);
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
  selectionSort(arr,n);
  cout<<endl<<"Sorted Array"<<endl;
  display(arr,n);
  return 0;
}
