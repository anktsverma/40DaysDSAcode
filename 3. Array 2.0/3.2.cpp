#include<iostream>
#include<cstring>
using namespace std;
void rotate(char *arr,int k){
    int i=strlen(arr);
    while(i>=0){
        arr[i+k]=arr[i];
        i--;
    }
    i=strlen(arr);
    int j=i-k;
    int s=0;
    while(j<i){
        arr[s]=arr[j];
        s++;
        j++;
    }
    arr[i-k]='\0';
}
int main(){
  char arr[]="Hello";
  int k=2;
  rotate(arr,k);
  cout<<arr<<endl;
  return 0;
}
