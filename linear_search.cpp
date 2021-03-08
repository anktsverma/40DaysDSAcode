#include<iostream>
using namespace std;

void linear_Search(int arr[],int n,int e){
    int temp=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]==e){
            cout<<"Element found at postion: "<<i+1<<endl;
            temp=1;
            break;
        }
    }
    if(temp==0){
        cout<<"No Element Found"<<endl;
    }
}


int main(){
    int n,e;
    cout<<"Enter the no Elements in an array and array elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter an Element to be Searched"<<endl;
    cin>>e;
    linear_Search(arr,n,e);
    return 0;
}