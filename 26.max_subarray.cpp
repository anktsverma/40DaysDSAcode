#include<iostream>
using namespace std;

void mx_subarray(int arr[],int n){
    int mx=-99999;
    int start=-1;
    int end=-1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum>mx){
                mx=sum;
                start=i;
                end=j;
            }
        }
    }
    cout<<"Max Sum is: "<<mx<<endl;
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mx_subarray(arr,n);
    return 0;
}