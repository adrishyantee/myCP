#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll findmax(ll idx, int n,vector<ll> &a, vector<ll> &dp){

    if(idx>n)
    return 0;

    if(dp[idx]!=-1)
    return dp[idx];

    ll cnt=0;
    for(ll i=2*idx;i<=n;i+=idx){
        if(a[i]>a[idx]){
        ll val = 1+findmax(i,n,a,dp);
        cnt = max(cnt,val);
        }
    }
    return dp[idx]=cnt;
}


int main(){

    int t; cin>>t;

    while(t--){
        ll n;cin>>n;
        vector<ll> arr(n+1);
       

        for(ll i=1;i<=n;i++)
        cin>>arr[i];

        ll maxi=1;

        vector<ll> dp(n+1,-1);

        for(ll i=1;i<=n;i++){
            maxi=max(maxi,1+ findmax(i,n, arr,dp));
        }

        cout<<maxi<<endl;

    }
    return 0;
}