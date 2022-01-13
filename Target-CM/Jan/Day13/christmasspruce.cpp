#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll n; cin>>n;

    vector<vector<ll>> adj(n);

    for(ll i=1;i<n;i++){
        ll x; cin>>x;
        adj[x-1].push_back(i);
    }

    ll flag=0;

    for(ll i=0;i<n;i++){
        if(adj[i].size()!=0){
        vector<ll> v=adj[i];
        ll cnt=0;
        for(ll j=0;j<v.size();j++){
            if(adj[v[j]].size()==0)
            cnt++;            
        }
        if(cnt<3){
        flag=1;
        break;
        }
        }
    }
    if(flag==1)
    cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
    return 0;

    
}