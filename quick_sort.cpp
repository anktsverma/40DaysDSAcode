#include<iostream>
using namespace std;
int Partition(int arr[],int s,int e){
  int pivot=arr[e];
  int pindex=s;
  for(int i=s;i<e;i++){
     if(arr[i]<pivot){
         swap(arr[i],arr[pindex]);
         pindex++;
     }
  }
  swap(arr[e],arr[pindex]);
  return pindex;
}

void quickSort(int arr[],int s,int e){
    if(s<e){
    int p=Partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
    }
}

int main(){
    int n;
    cout<<"Enter the total elements in an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets to the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Unsorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);

    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}