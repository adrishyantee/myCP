#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
 
 
int main(){
 
    ll n,m;
    cin>>n>>m;
    ll ans=0;
 
  
    for (ll i = 0; i <= n; i++) {
        ll cur = i;
        ll type1 = n - i;
        ll type2 = m - 2 * i;
 
        if (type1 >= 0) {
            cur += min(type2, type1/2);
            ans = max(ans, cur);
        }
    }
 
    cout<<ans<<endl;
    return 0;
}