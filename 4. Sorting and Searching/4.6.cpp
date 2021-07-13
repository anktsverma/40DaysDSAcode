#include<iostream>
#include<algorithm>

using namespace std;

bool comp(pair<string,int>p1,pair<string,int>p2){
   if(p1.second==p2.second){
      return p1.first<p2.first;
   }
   return p1.second>p2.second;
}

int main(){

   string name;
   int salary,min_salary;
   pair<string,int>employee[1005];
   int n;
   cin>>n>>min_salary;
   for(int i=0;i<n;i++){
    cin>>name>>salary;
    employee[i].first=name;
    employee[i].second=salary;
   }
   sort(employee,employee+n,comp);
   for(int i=0;i<n;i++){
    if(employee[i].second>min_salary){
        cout<<employee[i].first<<" "<<employee[i].second<<endl;
    }
   }
   return 0;
   }
