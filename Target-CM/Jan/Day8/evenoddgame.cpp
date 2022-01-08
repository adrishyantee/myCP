#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &e : v) {
        cin >> e;
    }
    sort(v.rbegin(), v.rend());
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) {
        if (v[i] % 2 == 0)
            ans += v[i];
        } 
        else {
        if (v[i] % 2 == 1)
            ans -= v[i];
        }
    }
    if (ans == 0) {
        cout << "Tie"<<endl;
    } else if (ans > 0) {
        cout << "Alice"<<endl;
    } else {
        cout << "Bob"<<endl;
    }
    }

    return 0;
}