#include <bits/stdc++.h>
using namespace std;

map<long long,vector<long long>> mp;
void levelOrder(vector<long long> &ans, vector<bool> &visited) { 
        if(mp.size()==0) 
        return; 

        queue<long long> q; 
        q.push(1); 
        visited[1]=true;

        while(!q.empty()) {
            long long size = q.size();
            for(long long i = 0;i<size;i++) {
                long long node = q.front(); 
                q.pop(); 
               for(long long j=0;j<mp[node].size();j++){
                   long long val = mp[node][j];
                   if(visited[val]==false)
                   q.push(val);
                   visited[val]=true;
               }
            }
            ans.push_back(size);
        } 
}

int main(){

    long long n; cin>>n;
    for(long long i=0;i<n-1;i++){
        long long u,v; cin>>u>>v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }

    vector<long long> level;
    vector<bool> visited(n+1,false);
    levelOrder(level, visited);
    long long evenn=0,oddn=0;

    long long ans=0;
    vector<int> temp(level.size());    

    for(long long i=level.size()-1;i>=0;i--){
        if(i%2==0){
            evenn+=level[i];
        }
        else{
            oddn+=level[i];
        }
    }
    ans=(evenn*oddn-(n-1));
    cout<<ans<<endl;

    return 0;

}