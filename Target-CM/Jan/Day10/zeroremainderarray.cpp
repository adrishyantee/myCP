#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll t;cin>>t;
    while(t--){

    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    map<ll,ll> mp;

    for(ll &i:a){
    cin>>i;
    mp[i%k]++;
    }

    if(mp.size()==1 && mp[0]==n)
    cout<<0<<endl;
    else{
        pair<ll,ll> ans={0,0};
        for(auto m:mp){
            ll cnt = m.second;
            ll highestx = cnt*k-m.first;
            if(highestx>=ans.second && m.first!=0){
            ans.second=highestx;
            ans.first+=cnt;
            }
        }
        cout<<ans.second+1<<endl;
    }
    }

    return 0;
}
