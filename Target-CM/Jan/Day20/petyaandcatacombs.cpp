#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll n; cin >> n;

    map<ll,ll> mp;

    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    ll ans=0;

    for(auto m:mp){
        ll val = ((ll)m.second-1);
        ans+=(max(0LL,val));
    }

    cout<<ans+1<<endl;
    return 0;
}


