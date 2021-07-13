#include<iostream>
#include<cstring>

using namespace std;

void printSubstring(char *arr){
  int l=strlen(arr);
  for(int i=0;i<l;i++){
    for(int j=i;j<l;j++){
      for(int k=i;k<=j;k++){
        cout<<arr[k];
      }
      cout<<endl;
    }
  }
}

int main(){
  char arr[]="Hello";
  printSubstring(arr);
  return 0;
}
