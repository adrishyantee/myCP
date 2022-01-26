#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define PI 3.141592653589793238
#define ff first
#define ss second
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
ll MOD = 1e9 + 7;
ll MOD1 = 998244353;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << x << endl;
#else
#define debug(x)
#endif
 
void printarr(vector<ll> &arr)
{
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
ll power(ll n, ll p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return n;
    if (p % 2 == 0)
    {
        ll smallans = power(n, p / 2);
        return (smallans * smallans);
    }
    else
    {
        ll smallans = power(n, p / 2);
        return ((smallans * smallans) * n);
    }
}
ll powermod(ll n, ll p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return n;
    if (p % 2 == 0)
    {
        ll smallans = powermod(n, p / 2);
        return (smallans * smallans) % MOD;
    }
    else
    {
        ll smallans = powermod(n, p / 2);
        return ((smallans * smallans) % MOD * n) % MOD;
    }
}
ll GCD(ll a, ll b)
{
    if (a == 0)
    {
        return b;
    }
    return GCD(b % a, a);
}
vector<bool> sieve()
{
    ll n = 1e6 + 1;
    vector<bool> arr(n, true);
    for (ll i = 2; i <= n; i++)
    {
        if (arr[i] == true)
        {
            for (ll j = i * i; j <= n; j += i)
            {
                arr[j] = false;
            }
        }
    }
    return arr;
}
ll factorial(ll n)
{
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans = (ans * i) % MOD;
    }
    return ans;
}
void solve()
{
    ll t; cin>>t;
    while(t--) {
        string s; cin>>s;

        ll res=0,count=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='+')
            count++;
            else
            count--;
            if(count<0){
            res+=i+1;
            count=0;
            }
        }
       
        cout<<res+s.size()<<endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    solve();
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}