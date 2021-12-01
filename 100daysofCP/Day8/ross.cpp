#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n,p,q;
    cin>>n>>p>>q;
    string s;
    cin>>s;
    ll a = 0,b = 0;
    bool flag = 1;
    for(ll i=0;i<n;i++) {
        if(s[i]=='0') {
        flag = !flag;
    }
        if(flag)
        a++;
        else
        b++;
    }
        p = abs(p),q=abs(q);
        if(min(a,b)>=max(p,q)) {
        ll maxp = max(a,b),minp = min(a,b);
        if( ((maxp-p)%2!=0 && (minp-p)%2!=0) || ((maxp-q)%2!=0 && (minp-q)%2!=0) )
        cout<<"NO"<<"\n";
        else {
        if( ((maxp-p)%2!=0&&(maxp-q)%2!=0) || ((minp-p)%2!=0&&(minp-q)%2!=0) )
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
        }
    }
    else if( min(a,b)<min(p,q)||max(a,b)<max(p,q) )
    cout<<"NO"<<"\n";
    else {
    ll maxp = max(a,b),minp = min(a,b);
    ll maxd = max(p,q),mind = min(p,q);
    if((maxp-maxd)%2!=0||(minp-mind)%2!=0)
    cout<<"NO"<<"\n";
    else
    cout<<"YES"<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
    solve();
}
}