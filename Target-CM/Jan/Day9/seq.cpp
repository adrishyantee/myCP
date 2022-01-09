#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;
    while(t--){

        ll n;
        cin>>n;
        vector<ll> a;

        map<ll,ll> mp;
        ll prev = LONG_MAX;
        for(ll i=0;i<n;i++){
            ll x; cin>>x;
            if(x!=prev){
            a.push_back(x);
            prev=x;
            mp[x]++;
            }
        }
        ll ans=LONG_MAX;

        // for(ll i=0;i<a.size();i++)
        // cout<<a[i]<<" ";
        // cout<<endl;

        if(a.size()==1){
        cout<<0<<endl;
        continue;
        }
        if(a[0]==a[a.size()-1] && mp[a[0]]==2){
        cout<<1<<endl;
        continue;
        }
        for(ll i=0;i<a.size();i++){
            ll find=0;
            if(a[i]==a[0] && a[i]==a[a.size()-1])
                find=mp[a[i]]-1;
            else if(i==0 || i==a.size()-1)
            find=mp[a[i]];
            else{
                find=mp[a[i]]+1;
            }
            // cout<<find<<" ";
            ans=min(ans,find);
        }
        cout<<ans<<endl;


    }
    return 0;
}