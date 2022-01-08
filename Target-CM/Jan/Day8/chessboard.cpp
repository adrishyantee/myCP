#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int n,m; cin>>n>>m;

    char in[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>in[i][j];
            if(in[i][j]=='.')
            {
                if((i+j)%2==0)
                in[i][j]='B';
                else
                in[i][j]='W';
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<in[i][j];
        }
        cout<<endl;
    }
    return 0;

}