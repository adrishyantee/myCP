#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(vector<int> &a, int n, int dp[][3]){

    if(a[0]==0)
    dp[0][0]=1;
    else if(a[0]==1)
    dp[0][1]=0;
    else if(a[0]==2)
    dp[0][2]=0;
    else if(a[0]==3){
    dp[0][1]=0;
    dp[0][2]=0;
    }

    for(int i=1;i<n;i++){
            dp[i][0]= 1 + min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]));
        if(a[i]==1){
             dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
        }
        if(a[i]==2){
             dp[i][2]=min(dp[i-1][0],dp[i-1][1]);    
        }
        if(a[i]==3){
            dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=min(dp[i-1][0],dp[i-1][1]);  
        }
    }

    return min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
}
int main(){

    int n; cin>>n;
    vector<int> a(n+1);
    int dp[n][3];
    for(int i=0;i<n;i++){
    cin>>a[i];
    dp[i][0]=dp[i][1]=dp[i][2]=INT_MAX;
    }
    cout<<solve(a,n,dp)<<endl;

    return 0;
}