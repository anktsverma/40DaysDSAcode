#include<iostream>
using namespace std;

void optbubbleSort(int arr[],int n){
   for(int i=0;i<n;i++){
       int flag=0;
       for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
               flag=1;
               swap(arr[j],arr[j+1]);
           }
       }
       if(flag==0) break;
   }
}

int main(){
    int n;
    cout<<"Enter the total elemant in the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    optbubbleSort(arr,n);
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}