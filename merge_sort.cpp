#include<iostream>
using namespace std;
int merge(int arr[],int l,int mid,int r){
     int i=l,j=mid+1,k=l;
     int temp[r+1];
     while(i<=mid && j<=r){
          if(arr[i]<=arr[j]){
              temp[k]=arr[i];
              i++;
              k++;
          }
          else{
              temp[k]=arr[j];
              j++;
              k++;
          }

     }

     while(i<=mid){
         temp[k]=arr[i];
         i++;
         k++;
     }

     while(j<=r){
         temp[k]=arr[j];
         j++;
         k++;
     }
     for(int p=l;p<=r;p++){
         arr[p]=temp[p];
     }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
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
    mergeSort(arr,0,n-1);

    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}