#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  vector<int>arr;
  arr.reserve(100);
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    arr.push_back(a);
  }
  sort(arr.begin(),arr.end());
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
  }
