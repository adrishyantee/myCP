#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m; cin>>n>>m;

    vector<vector<int>> a(n, vector<int> (m,0));
    vector<vector<int>> b(n,vector<int>(m,1));

    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){

            cin>>a[i][j];

            if(a[i][j]==0){
              for(int l = 0;l < m;l++)
                b[i][l]=0;
              for(int k = 0;k < n;k++)
                b[k][j]=0;
            }
        }
    }

    vector<vector<int>> res(n,vector<int>(m,0));

    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i][j]==1){
              for(int l = 0;l < m;l++)
                res[i][l]=1;
              for(int k = 0;k < n;k++)
                res[k][j]=1;
               
            }
        }
    }

    if(res == a){
    cout<<"YES"<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    cout<<"NO"<<endl;
    return 0;
}