#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

        ll n,m;
        cin>>n>>m;

        // vector<ll> pow(n);
        // for(ll i=0;i<m;i++){
        //     cin>>pow[i];
        // }

        vector<set<ll>> frnds(n);
        vector<set<ll>> temp(n);
        frnds[0].insert(INT_MAX);



        for(ll i=0;i<m;i++){
            ll u,v;
            cin >> u>>v;
            frnds[u].insert(v);
            frnds[v].insert(u);
        }
        ll q;
        cin>>q;

        while(q--){
            int ch; cin>>ch;

            if(ch==1){
                ll u,v;
                cin>>u>>v;
                frnds[u].insert(v);
                frnds[v].insert(u);
            }

            
           else if(ch==1){
                ll u,v;
                cin>>u>>v;
                frnds[u].erase(v);
                frnds[v].erase(u);
            }
            
            else{
                ll ans=0;

                temp=frnds;
                bool f = true;
                while(!f){
                    for(ll i=1;i<n+1;i++){
                        if(temp[i].size()>0 && *temp[i].begin()!=INT_MAX){
                            f=false;

                            if(*temp[i].begin()<i){
                                for(ll j:temp[i]){
                                    temp[j].erase(i);
                                }

                                temp[i].clear();
                                temp[i].insert(INT_MAX);
                            }
                        }
                    }
                }

                for(ll i=0;i<n;i++){
                    if(temp[i].size()==0){
                        ans++;
                    }
                    else if(*temp[i].begin()!=INT_MAX)
                    ans++;
                }
                cout<<ans<<endl;
            }
        }
    return 0;
}