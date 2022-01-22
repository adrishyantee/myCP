#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ll t; cin >> t;

    while (t--) {
        ll n, w;
        cin >> n >> w;

        multiset<ll> st;
        for (ll i = 0; i < n; i++) {
            ll x; cin>>x;
            st.insert(x);
        }

        int h = 1, sum = w;

        while (!st.empty()) {
            auto it = st.upper_bound(sum);
            if (it != st.begin()) //we found
            {
                it--;
                sum -=(*it);
                st.erase(it);
            } else {
                sum=w;
                h++;
            }
        }

        cout << h << endl;
    }
    return 0;

}