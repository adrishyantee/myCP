#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    ll t; cin>>t;

    while(t--){
        ll n; cin>>n;

        vector<vector<ll>> graph(n,vector<ll> (n));
        vector<ll> root(n), children(n);
        for(ll i=0;i<n;i++){
            root[i]=-1;
            children[i]=-1;
        }
        vector<ll> count(n,0);
        vector<pair<ll,ll>> edges(n);
        int flag=0;

        for(ll i=0;i<n-1;i++){
            cin>>edges[i].first>>edges[i].second;
        }
        
        for(ll i=0;i<n-1;i++){
            ll u=edges[i].first-1;
            ll v=edges[i].second-1;
            if(root[u]==-1 && children[v]==-1){
                root[u]=v;
                children[v]=u;
            }
            else{
                root[v]=u;
                children[u]=v;
            }
            count[u]++;
            count[v]++;
            if(!(count[u]<=2&&count[v]<=2))
            flag=1;
        }



        if(flag==1){
            cout<<-1<<endl;
            continue;
        }

        flag=0;
        ll idx=0;
        for(ll i=0;i<n;i++){
            if(root[i]==-1){
                flag=1;
                idx=i;
                break;
            }
        }

        ll i=idx, put=2;
        if(flag==0){
            while(true){
                if(i==-1 || root[i]==-1)
                break;

                graph[i][root[i]]=put;
                graph[root[i]][i]=put;
                if(put==2)
                put=11;
                else
                put=2;
                i=root[i]; 
            }

        }
        else{
            while(true){
                if(i==-1 || children[i]==-1)
                break;

                graph[i][children[i]]=put;
                graph[children[i]][i]=put;
                if(put==2)
                put=11;
                else
                put=2;
            i=children[i];
            }
        }
        for(ll i=0;i<n-1;i++){
            cout<<graph[edges[i].first-1][edges[i].second-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


