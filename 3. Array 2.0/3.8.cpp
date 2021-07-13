#include<iostream>
#include<cstring>
using namespace std;


int main(){
  char a[10][100];
  int n;
  cin>>n;

  cin.ignore();
  for(int i=0;i<n;i++){
    cin.getline(a[i],100);
  }
  cout<<endl;

  char key[100];
  cin.getline(key,100);
  int i;
  for(i=0;i<n;i++){
    if(strcmp(key,a[i])==0){
        cout<<"Element found at index "<<i<<endl;
        break;
    }
  }
  if(i==n){
    cout<<"Element Not Found"<<endl;
  }

  cout<<endl;

  for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
  }
  return 0;
  }
