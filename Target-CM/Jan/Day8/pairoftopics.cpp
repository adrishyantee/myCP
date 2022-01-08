#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    vector<ll> a(n),b(n),c(n);

    for(ll &e: a)
    cin>>e;
    
    
    for(ll &e: b)
    cin>>e;
    
    
    for(ll i=0;i<n;i++)
    c[i]=a[i]-b[i];

    sort(c.begin(),c.end());

    int i=0;
    while(c[i]<=0 && i<n)
    i++;

    ll ans = 0;

    while(i<n){
    ll idx=lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
    ans+=i-idx;
    i++;
    }
    cout<<ans<<endl;

    return 0;
}