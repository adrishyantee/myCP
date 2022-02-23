#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll prev = -1;
    ll ans = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            ll val = i - prev;
            if(prev == -1)
            ans =1;
            else
            ans *= val;

            prev = i;
        }
    }

    cout << ans << endl;
}