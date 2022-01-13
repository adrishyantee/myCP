#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> arr(n);
        map<int,vector<ll>> mp;

        for(ll i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]].push_back(i);
        }

        if(mp.size()==1)
        {
            cout<<n-1<<endl;
            continue;
        }
        if(mp.size()==n){
            cout<<-1<<endl;
            continue;
        }

        ll ans=LONG_MIN;
        ll dist=LONG_MAX;
       ll start=0,end=0;
        for(auto m:mp){
            vector<ll> v=m.second;
            for(ll i=0;i<v.size()-1;i++){
                // cout<<v[i]<<" "<<v[i+1]<<endl;
                if(v[i+1]-v[i]<dist){
                    dist=v[i+1]-v[i];
                    start=v[i];
                    end=v[i+1];
                }
            }
        }
        ll size=min(n-start-1,n-end-1)+min(start,end)+1;
        ans=max(size,ans);
        cout<<ans<<endl;
    }
    return 0;
}