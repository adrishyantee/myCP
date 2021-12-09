#include <bits/stdc++.h>
using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }

template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifdef LOCAL

#define dbg(...) cerr << "(" << #_VA_ARGS_ << "):", dbg_out(_VA_ARGS_)

#else

#define dbg(...)

#endif

#define ar array

#define ll long long

#define ld long double

#define sza(x) ((int)x.size())

#define all(a) (a).begin(), (a).end()

void solve() {

    ll n,x,k;

    cin>>n>>x>>k;

    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    ll c = 0;
    for(int i=0;i<n;i++) {
        if((abs(a[i]-b[i]))<=k)
        c++;
    }
    if(c<x)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();

    }
}