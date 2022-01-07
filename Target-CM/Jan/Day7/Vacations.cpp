#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[105][3] ={-1};

int solve(vector<ll> &a, ll n, ll idx, ll last){

    if(dp[idx][last]!=-1)
    return dp[idx][last];

    if(idx>=n)
    return 0;

    // if(last==-1){
    //     dp[idx][]
    // }

    if(a[idx]==0){
        return dp[idx][last]=solve(a,n,idx+1,0)+1;
    }
    else if(a[idx]==1){
        if(last==1)
        return dp[idx][last]=solve(a,n,idx+1,0)+1;
        else
        return dp[idx][last]=solve(a,n,idx+1,1);
    }

    else if(a[idx]==2){
        if(last==2)
        return dp[idx][last]=solve(a,n,idx+1,0)+1;
        else
        return dp[idx][last]=solve(a,n,idx+1,2);
    }
    else if(a[idx]==3){
        int f = (last==1)?INT_MAX:solve(a,n,idx+1,1);
        int s = (last==2)?INT_MAX:solve(a,n,idx+1,2);
        dp[idx][last]=min(f,s);
    }
    return dp[idx][last];

}
int main(){

    ll n; cin>>n;
    vector<ll> a(n);

    for(ll i=0;i<n;i++)
    cin>>a[i];

    cout<<solve(a,n,0,INT_MAX)<<endl;

    return 0;
}