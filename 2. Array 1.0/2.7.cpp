#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c1,c2,c3,c4,n,m;
        cin>>c1>>c2>>c3>>c4>>n>>m;
        int risk[100];
        int cab[100];
        for(int i=0;i<n;i++){
            cin>>risk[i];
        }
        for(int i=0;i<m;i++){
            cin>>cab[i];
        }
        int rcost=0;
        int ccost=0;
        for(int i=0;i<n;i++){
            rcost+=min(c1*risk[i],c2);
        }
        rcost=min(rcost,c3);
        for(int i=0;i<m;i++){
            ccost+=min(c1*cab[i],c2);
        }
        ccost=min(ccost,c3);
        cout<<min(c4,(rcost+ccost))<<endl;

    }
    return 0;
}