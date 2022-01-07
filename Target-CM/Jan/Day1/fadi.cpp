#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll x;

ll lcm(ll a, ll b){
    return a / __gcd(a, b)*b;
}
int main(){
    ll x;
    cin >> x;
    ll ans;
    for(ll i=1;i*i<=x; i++){
        if(x % i == 0 && lcm(i, x / i) == x){
            ans = i;
        }
    }
    cout << x / ans << " " << ans << endl;
    return 0;
}