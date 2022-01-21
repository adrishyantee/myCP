#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
 
    ll t;
	cin >> t;
 
	map<ll, ll> mp;
	mp[1] = 1;
	for (ll i = 2; i <= 1e18 + 10; i = i * 2) {
		mp[i] = (i-1) * 2 + 1;
	}
 
	while (t--) {
 
		ll n;
		cin >> n;
 
		ll ans = 0;
		ll i = 0;
		while (n > 0) {

			//use this for precision
			if (n % 2 == 1) {
				ans += mp[pow(2, i)];
			}
			i++;
			n = n / 2;
		}
 
		cout << ans << endl;
        }
    return 0;
}