#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool comp(string a,string b){
   return a.length()<b.length();
}

int main(){
  string s1("Hello World");
  cout<<s1<<endl;

  string s2="Another Way !";
  cout<<s2<<endl;

  for(int i=0;i<s2.length();i++){
    cout<<s2[i]<<"-";
  }

  cout<<endl;
  string s3[]={"Apple","Mango","Banana","Pineapple"};
  sort(s3,s3+4,comp);
  for(int i=0;i<4;i++){
    cout<<s3[i]<<" , ";
  }
  cout<<endl;
  string s4;
  getline(cin,s4);
  cout<<s4<<endl;
  return 0;
}
