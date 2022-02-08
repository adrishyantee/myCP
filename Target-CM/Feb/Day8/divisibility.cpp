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

bool compare(pair<char,ll> p1, pair<char,ll> p2){
    return p1.second<p2.second;
}


double round(double var)
{
    double value = (int)(var * 100 + .5);
    return (double)value / 100;
}

bool dp[101][8];



void solve()
{

    string s;
    cin>>s;
    int n;
    n = s.size();
    int prev[101][8];
    memset(prev, -1, sizeof(prev));
 
    dp[0][(s[0] - '0') % 8] = true;
 
    for (int i = 1; i < n; i++) {
        dp[i][(s[i] - '0') % 8] = true;
 
        for (int j = 0; j < 8; j++) {
            if (dp[i - 1][j]) {
                dp[i][(j * 10 + s[i] - '0') % 8] = true;
                prev[i][(j * 10 + s[i] - '0') % 8] = j;
 
                dp[i][j] = true;
                prev[i][j] = j;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (dp[i][0]) {
            string ans = "";
            int k= i, j = 0;
 
            while (true) {
                if (prev[k][j] == -1 || prev[k][j] != j) {
                    ans+=s[k];
                }
 
                if (prev[k][j] == -1) 
                break;
 
                j = prev[k][j];
                k--;
            }
 
            cout<<"YES"<<endl;
            reverse(ans.begin(),ans.end());
            cout << ans << endl;
            return;
        }
    }
 
   cout<<"NO"<<endl;
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