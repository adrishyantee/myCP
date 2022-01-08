#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){

    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    for (ll &x : v) {
        cin >> x;
    }
    sort(v.begin(), v.end());
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
        ans -= upper_bound(v.begin(), v.end(), l - v[i]-1) - v.begin();
        if (l <= 2 * v[i] && 2 * v[i] <= r) {
            ans--;
        }
    }
    cout << ans / 2 << "\n";
    }
    return 0;
}