#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){

    int t; cin>>t;
    while(t--){
    char a[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>a[i][j];
            if(a[i][j]=='2')
            a[i][j]='1';
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    }

    return 0;
}