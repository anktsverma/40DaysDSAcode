#include<iostream>
using namespace std;

void Binary_Search(int arr[],int f, int n){
    int i=0;
    for(;i<n;i++){
        if(arr[i]==f){
            cout<<"Element Found at Index : "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Element not found"<<endl;
    }
}

int main(){
    int n,f;
    cin>>n>>f;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Binary_Search(arr,f,n);
    return 0;
}