#include<bits/stdc++.h>
using namespace std;

//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

//1 
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1

// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
//             }

//         }
//         cout<<endl;
//     }
// }

//    *****
//   ****
//  ***
// **
//*

// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int k=0;k<n-1-i;k++){
//             cout<<" ";
//         }
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


//    1
//   1 2
//  1 2 3
// 1 2 3 4
//1 2 3 4 5

// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int k=0;k<n-1-i;k++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

//        1
//      2 1 2
//    3 2 1 2 3
//  4 3 2 1 2 3 4
//5 4 3 2 1 2 3 4 5

// void pattern(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++){
//                 cout<<"  ";
//             } 
//             for(int j=i;j>=1;j--){
//                 cout<<j<<" ";
//             }
//             for(int j=2;j<=i;j++){
//                 cout<<j<<" ";
//             }
//             cout<<endl;
//         }
// }



//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * * 
//         *

// void pattern(int n){
//     for(int i=1;i<n;i++){
//         for(int k=1;k<=n-i;k++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         for(int j=2;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }

//         for(int i=n;i>=1;i--){
//         for(int k=1;k<=n-i;k++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         for(int j=2;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }



//     *       *     
//   *   *   *   *   
// *       *       *

void pattern(int n){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
   int n;
   cin>>n;
   pattern(n);
   return 0;
}