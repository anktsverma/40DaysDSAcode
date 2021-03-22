#include<bits/stdc++.h>
using namespace std;
//pattern 1 Rectangular Pattern
// void pattern1(int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//Pattern 2 Hollow Rectangle
// void pattern2(int row,int col){
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row || j==1 || j==col){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

// }

// Pyramid 
// void pattern1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//           cout<<"* ";
//         }
//         cout<<endl;
//     }

// }

//  Pyramid turned 180
// void pattern1(int n){
//     for(int i=1;i<=n;i++){
//         for(int k=i;k<=n-1;k++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//           cout<<"* ";
//         }
//         cout<<endl;
//     }

// }


// 1
// 2 2
// 3 3 3
// 4 4 4 4 
// 5 5 5 5 5
// void pattern1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//           cout<<i<<" ";
//         }
//         cout<<endl;
//     }

// }

// Floyd Triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// void pattern1(int n){
//     int k=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//           cout<<k<<" ";
//           k++;
//         }
//         cout<<endl;
//     }

// }


//Butterfly Pattern
void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          cout<<"* ";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
          cout<<"* ";
        }
        cout<<endl;
    }

        for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
          cout<<"* ";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
          cout<<"* ";
        }
        cout<<endl;
    }

}


int main(){
//    int row,col;
//    cin>>row>>col;
//    pattern1(row,col);

   int n;
   cin>>n;
   pattern1(n);
   return 0;
}