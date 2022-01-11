#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll t;cin>>t;
    while(t--){

    ll n;
    cin>>n;
    
    vector<ll> v(n);
    map<ll,pair<ll,ll>> mp;
    for(ll i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]].first++;
    mp[v[i]].second=i;
    }
    if(mp.size()==1 && mp[v[0]].first==n)
    cout<<"NO"<<endl;
    else
    {

        auto itr= mp.begin();
        auto itr1=(++mp.begin());
        ll ans =(*itr).first;
        ll idx =(*itr).second.second;
        ll ans1 =(*(itr1)).first;
        cout<<"YES"<<endl;
        for(ll i=0;i<n;i++){
            if(ans!=v[i])
            cout<<idx+1<<" "<<i+1<<endl;
        }
        ll idx1=(*itr1).second.second;
        for(ll i=0;i<n;i++){
            if(ans==v[i] && i!=idx)
            cout<<idx1+1<<" "<<i+1<<endl;
        }
    }
    }

    return 0;
}
