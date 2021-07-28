#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        unordered_map<ll,ll> mp;

        for(ll i=0; i<n;i++){
        cin>>a[i];
        if(mp.find(a[i])!= mp.end())
        mp[a[i]]++;
        else
        mp.insert({a[i],1});
        }
        ll ans=0;
        for(auto i:mp){
            ans+=min(i.first-1,i.second);
        }

        cout<<ans<<endl;
    }
return 0;
}