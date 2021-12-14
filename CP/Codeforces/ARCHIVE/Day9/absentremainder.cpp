#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    unordered_map<ll,ll> mp;

   vector <bool> p(1e6+1,0);
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
        p[arr[i]]=1;
    }
    sort(arr.begin(),arr.end());
    vector<pair<ll,ll>> ans;
    for(ll i=1;i<n;i++) {
        for(ll j=0;j<i;j++) {
            if(p[arr[i]%arr[j]]==0)
            ans.push_back({arr[i],arr[j]});
            if(ans.size()>=(n/2))
            break;
        }
        if(ans.size()>=(n/2))
        break;
    }
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll tc = 1;
cin >> tc;
for (ll t = 1; t <= tc; t++) {
solve();
}
}