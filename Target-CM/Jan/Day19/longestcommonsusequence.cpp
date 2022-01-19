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

    vector<ll> arr={1,2,3,4,5,6};
    return 0;
}