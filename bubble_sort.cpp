#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
               swap(arr[j],arr[j+1]);
        }
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
    
    bubble_sort(arr,n);

    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}