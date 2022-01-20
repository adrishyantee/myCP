#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    ll t; cin>>t;

    while(t--){
    ll n; cin >> n;
    vector<vector<array<int, 2>>> g(n);
    vector<int> deg(n), a(n - 1);
    for(int u, v, i = 0; i < n - 1; i++) {
        cin >> u >> v;
        g[--u].push_back({--v, i});
        g[v].push_back({u, i});
        deg[u]++; 
        deg[v]++;
    }
    
    if(*max_element(deg.begin(), deg.end()) > 2){
         cout << -1 << '\n';
         continue;
    } 

    function<void(int, int, int c)> dfs = [&] (int v, int p, int c) {
        for(auto &[u, i] : g[v]) if(u != p) {
            a[i] = c;
            dfs(u, v, c ^ 1);
        }
    };

    dfs(min_element(deg.begin(), deg.end()) - deg.begin(), -1, 0);
    for(auto &x : a)
        cout << x + 2 << ' ';
    cout <<endl;
    }
    return 0;
}


