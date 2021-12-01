#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
ll n;
cin>>n;
vector<ll> a(n);
for(ll i=0;i<n;i++) {
cin>>a[i];
}
sort((a).begin(), (a).end());
ll ans = a[0]*n;
ll pos = n;
ll c = a[0];
for(ll i=0;i<n;i++) {
a[i]-=c;
if(a[i]>0)
{
pos = i;
break;
}
}
ans+=(n-pos);
cout<<ans<<"\n";
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int tc = 1;
cin >> tc;
for (int t = 1; t <= tc; t++) {
// cout << "Case #" << t << ": ";
solve();
}
}