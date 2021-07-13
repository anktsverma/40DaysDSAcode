#include<bits/stdc++.h>
using namespace std;

void printArray(int a[10][10],int r,int c){
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
          cout<<a[i][j]<<" ";
      cout<<endl;
     }

}

void spiralArray(int a[10][10],int r,int c){
   int sr=0;
   int er=r-1;
   int sc=0;
   int ec=c-1;
   while(sr<=er && sc<=ec){
    //start row
     for(int i=sc;i<=ec;i++){
        cout<<a[sr][i]<<" ";
     }
     sr++;

     //end column
     for(int i=sr;i<=er;i++){
        cout<<a[i][ec]<<" ";
     }
     ec--;

     //end row
     if(sr<er){
        for(int i=ec;i>=sc;i--){
        cout<<a[er][i]<<" ";
       }
      er--;
     }
     //start column
     if(sc<ec){
        for(int i=er;i>=sr;i--){
            cout<<a[i][sc]<<" ";
        }
        sc++;
     }
  }
}


int main(){
  int r,c;
  cin>>r>>c;
  int a[10][10];
  int c1=1;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      a[i][j]=c1++;
  }

  printArray(a,r,c);
  cout<<endl;
  spiralArray(a,r,c);


  return 0;
  }
