#include <bits/stdc++.h>
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#else

#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

void solve() {

    string n;
    ll k;
    cin>>n>>k;

    sort(all(n));

    ll st = 1;
    while(k>=1 && n[0]!='9') {
        for(int i=0;i<n.size();i++) {
            if(k<1)
            break;
            if(n[i]=='9')
            break;
            while(n[i]<(st+'0')&&k>=1){
                n[i]++;
                k--;
            }
        }
        st++;
    }
    ll ans = 1;
    for(int i=0;i<sza(n);i++) {
     ans*=(n[i]-'0');
    }
    cout<<ans<<"\n";
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

