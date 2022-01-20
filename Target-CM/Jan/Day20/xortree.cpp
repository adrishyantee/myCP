#include <bits/stdc++.h>
using namespace std;
#define ll long long


const int N  = 1e+5 +2;
map<ll,vector<ll>> mp;
vector<bool> vis(N, false);
vector<ll> in,fi;
vector<ll> finalans;



void dfs(ll node, ll level, ll odd, ll even){

    vis[node] = true;
    if(level%2==0){
        in[node-1]=(even%2==0)?in[node-1]:1-in[node-1];
    }
    else
        in[node-1]=(odd%2==0)?in[node-1]:1-in[node-1];
    
    if(fi[node-1]!=in[node-1]){
        finalans.push_back(node);
        if(level%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    for(auto i:mp[node]){
        if(!vis[i])
            dfs(i,level+1,odd,even);
    }
}

int main(){
    ll n; cin>>n;

    for(ll i=0;i<n-1;i++){
        ll u,v; cin>>u>>v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }

    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        in.push_back(x);
    }

    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        fi.push_back(x);
    }

    for(ll i=1;i<=n;i++){
        if(!vis[i])
        dfs(i,0,0,0);
    }

    cout<<finalans.size()<<endl;
    for(ll i=0;i<finalans.size();i++)
    cout<<finalans[i]<<endl;
    
    return 0;
}


// 15
// 2 1
// 3 2
// 4 3
// 5 4
// 6 5
// 7 6
// 8 7
// 9 8
// 10 9
// 11 10
// 12 11
// 13 12
// 14 13
// 15 14
// 0 1 0 0 1 1 1 1 1 1 0 0 0 1 1
// 1 1 1 1 0 0 1 1 0 1 0 0 1 1 0