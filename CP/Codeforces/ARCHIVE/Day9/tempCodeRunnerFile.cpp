#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    unordered_map<ll,ll> mp;

    for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
    }
    ll c= (ll)floor(n/2.0);
    ll count=0;

    sort(arr.begin(),arr.end(),greater<ll>());
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ll val =arr[i]%arr[j];
            if(mp.find(val)==mp.end()){
            cout<<arr[i]<<" "<<arr[j]<<endl; 
            c--;
            }
            if(c==0)
            break;
        }
        if(c==0)
        break;
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