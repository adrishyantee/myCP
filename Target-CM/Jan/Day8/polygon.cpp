#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char arr[n][n];
        int dp[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if((i==n-1 || j==n-1 ) && arr[i][j]=='1'){
                dp[i][j]=1;
            }
            else
            dp[i][j]=0;
            }
        }
        int flag =0;
        for(int i=n-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(arr[i][j]=='1'){
                if((dp[i][j+1]==1 || dp[i+1][j]==1))
                dp[i][j]=1;
                else{
                flag=1;
                break;
                }
                }
            }
        }
        if(flag!=1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}
