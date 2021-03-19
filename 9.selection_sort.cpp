#include<bits/stdc++.h>
using namespace std;

void selection_sort(int *arr,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    
}
 
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   selection_sort(arr,n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}