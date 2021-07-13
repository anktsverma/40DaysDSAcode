#include<iostream>
using namespace std;
#define ll long long int

bool isValid(ll arr[], ll n, ll k, ll mid){
    int student =1;
    ll curr_page=0;
    for(int i=0;i<n;i++){
        if(curr_page+arr[i]>mid){
            student++;
            curr_page=arr[i];
            if(student>k){
                return false;
            }
        }
        else{
            curr_page+=arr[i];
        }
    }
    return true;

}

ll binarySearch(ll arr[],ll n, ll k){
  ll s=0;
  ll e=0;
  ll totalp=0;
  for(int i=0;i<n;i++){
    totalp+=arr[i];
    s=max(s,arr[i]);
  }
  e=totalp;
  ll finalAns=s;
  ll mid;
  while(s<=e){
     mid=(s+e)/2;
    if(isValid(arr,n,k,mid)){
      e=mid-1;
      finalAns=mid;
    }
    else{
        s=mid+1;
    }
  }
  return finalAns;
}

int main(){

  ll n,k;
  cin>>n>>k;
  ll arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<binarySearch(arr,n,k);


  return 0;
  }
