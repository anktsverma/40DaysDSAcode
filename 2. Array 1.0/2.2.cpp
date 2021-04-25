#include<iostream>
using namespace std;

void Subarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
           for(int k=i;k<=j;k++){
              cout<<k<<",";
             }
            cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Subarray(arr,n);
    return 0;
}