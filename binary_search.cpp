#include<iostream>
using namespace std;

int binary_Search(int arr[],int n,int e){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==e){
           return mid;
        }
        else if(arr[mid]<e){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,e,output;
    cout<<"Enter the no Elements in an array and array elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter an Element to be Searched"<<endl;
    cin>>e;
    output=binary_Search(arr,n,e);

    if(output==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at position: "<<output+1<<endl;
    }
    return 0;
}