#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans = ans ^ (arr[i][j]-'0');
            }
        }
        if(ans == 0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }

    return 0;
}