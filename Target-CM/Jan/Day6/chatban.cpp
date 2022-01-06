#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll get(ll x) {
    return x* (x + 1) / 2;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll k;
        ll x;
        cin >> k >> x;
        ll l = 1, r = 2 * k - 1;
        ll res = 2 * k - 1;

        bool over = false;
        while (l <= r) {
            int mid = (l + r) >> 1;
            
            if (mid > k)
                over = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
            else
                over = (get(mid) >= x);
            if (over) {
                res = mid;
                r = mid - 1;
            } else
                l = mid + 1;
        }
        cout << res << endl;
    }
    
    return 0;
}