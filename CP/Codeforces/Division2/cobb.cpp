#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t; cin>>t;

    while(t--){

    ll n,k; cin>>n>>k;

    vector<ll> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll ans =INT_MIN;

    for(ll i=1;i<n;i++){
        // for(int j=i+1;j<n;j++){
            ans = max(ans, (i*(i-1)) - k*(v[i]|v[i-1]));
        
    }

    cout<<ans<<endl;
    }

    return 0;
}