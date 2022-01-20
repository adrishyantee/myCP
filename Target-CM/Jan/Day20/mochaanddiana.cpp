#include <bits/stdc++.h>
using namespace std;
#define ll long long

// we cant solve this using dsu and I have to learn that


bool cycledetect(int s, int V, map<ll,set<ll>> adj, vector<int> &visited){
        queue<pair<int,int>> q;  
        visited[s] = true;
        q.push({s, -1});  
        while (!q.empty()) {
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
     
            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if (par != it)
                    return true;
            }
        }
        return false;
}

bool isCycle(int V, map<ll,set<ll>> adj){
	    vector<int> vis(V+1, 0); 
	    for(int i = 1;i<=V;i++) {
	        if(!vis[i]) {
	            if(cycledetect(i, V, adj, vis)) 
                return true; 
	        }
	    }
	    return false; 
}

int main(){
    ll n, m1, m2;
    cin>>n>>m1>>m2;

    vector<vector<int>> adj(n+1,vector<int>(n+1,0));

    map<ll, set<ll>> mp;
    map<ll, set<ll>> dp;

    set<ll> s;
    for(ll i=1;i<=n;i++)
    s.insert(i);

    for(ll i=0;i<m1;i++){
        ll u,v; cin>>u>>v;
        mp[u].insert(v);
        mp[v].insert(u);
        adj[u][v]=1;
        adj[v][u]=1;
        s.erase(u);
        s.erase(v);
    }
    
    for(ll i=0;i<m2;i++){
        ll u,v; cin>>u>>v;
        dp[u].insert(v);
        dp[v].insert(u);
        adj[u][v]=1;
        adj[v][u]=1;
        s.erase(u);
        s.erase(v);
    }
    vector<pair<ll,ll>> p;
    for(auto i:s){
        if(i!=1){
        p.push_back({1,i});
        mp[i].insert(1);
        mp[1].insert(i);
        dp[i].insert(1);
        dp[1].insert(i);
        }
        else if(n>=2){
        p.push_back({2,1});
        mp[2].insert(1);
        dp[2].insert(1);
        mp[1].insert(2);
        dp[1].insert(2);
        }
    }

    for(ll i=1;i<=n-1;i++){
        for(ll j=i+1;j<=n;j++){
                if(s.count(i)==0 && s.count(j)==0 && adj[i][j]==0){
                dp[i].insert(j);
                dp[j].insert(i);
                mp[i].insert(j);
                mp[j].insert(i);
                if(isCycle(n,mp) || isCycle(n,dp)){
                dp[i].erase(j);
                dp[j].erase(i);
                mp[i].erase(j);
                mp[j].erase(i);
                }
                else
                p.push_back({i,j});
                }
        }
    }
    cout<<p.size()<<endl;
    for(auto i:p){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}