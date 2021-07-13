#include<iostream>
using namespace std;

void readMatrix(int arr[][10]){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }

  }
}

void printMatrix(int arr[][10]){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
}


void waveMatrix(int arr[][10]){
   for(int j=0;j<3;j++){
    if(j&1){
        for(int i=2;i>=0;i--){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<3;i++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
cout<<endl;
cout<<endl;
}

void
int main(){
  int arr[10][10];
  readMatrix(arr);
  printMatrix(arr);
  waveMatrix(arr);
  return 0;
  }
