#include<iostream>
using namespace std;

void linear_search(int key, int arr[],int n){
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element Found at index "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Element "<<key<<" not Found"<<endl;
    }
}

int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    linear_search(key,arr,n);
    return 0;
}