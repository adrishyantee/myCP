#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,h;
    cin>>n>>h;
    vector<ll> a(n);

    for(ll i=0;i<n;i++)
    cin>>a[i];

    vector<ll> maxdmge(n);
    ll maxd = 0,sum = 0;
    for(ll i=0;i<n-1;i++){
        maxdmge[i] = a[i+1]-a[i];
        maxd = max(maxdmge[i],maxd);
        sum+=maxdmge[i];
    }
    maxdmge[n-1] = INT_MAX;
    if((h-sum)>=maxd) {
        cout<<h-sum<<endl;
        return;
    }
    ll st = 1;
    ll ans = maxd;
    while(st<=maxd) {
        ll mid = (st + maxd)/2;
        sum = 0;
        for(ll i=0;i<n;i++) {
            sum+=min(mid,maxdmge[i]);
        }
        if(sum>=h) {
            ans = min(mid,ans);
            maxd = mid-1;
        }
        else
            st = mid+1;
    }
    cout<<ans<<endl;
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