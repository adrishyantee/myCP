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

bool compare(pair<char, ll> p1, pair<char, ll> p2)
{
    return p1.second < p2.second;
}

double round(double var)
{
    double value = (int)(var * 100 + .5);
    return (double)value / 100;
}
vector<vector<ll>> ans;
void check(vector<vector<char>> &a, ll x, ll y)
{ 
    if (a[x][y] == '0' && a[x + 1][y] == '0' && a[x][y + 1] == '0' && a[x + 1][y + 1] == '0')
        return;

    
    if(a[x][y] == '1' && a[x + 1][y] == '1' && a[x][y + 1] == '1' && a[x + 1][y + 1] == '1'){
        vector<ll> add = {0, 0, 1, 0, 0, 1, 1, 1};
        for(ll j = 0;j<8;j++){
            ll x1 = x+add[j];
            j++;
            ll y1 = y+add[j];
            vector<ll> v;
            
        for (ll i = 0; i < 8; i++)
        {
            ll a1 = x + add[i];
            i++;
            ll b =  y + add[i];
            if (a1 == x1 && b == y1)
                continue;
            v.push_back(a1);
            v.push_back(b);
            a[a1][b] = (char)(1 - (int)(a[a1][b]-'0') + '0');
            
        }
        // for(auto i:v)
        // cout<<i<<" ";
        // cout<<endl;
        ans.push_back(v);
       }
       return;
    }

    ll ones = 0, zeros = 0;

    ll x1 = 0, y1 = 0;
    ll x0 = 0, y0 = 0;
    if (a[x][y] == '0')
    {
        zeros++;
        x0 = x, y0 = y;
    }
    else
    {
        ones++;
        x1 = x, y1 = y;
    }
    if (a[x + 1][y] == '0')
    {
        zeros++;
        x0 = x + 1, y0 = y;
    }
    else
    {
        ones++;
        x1 = x + 1, y1 = y;
    }
    if (a[x][y + 1] == '0')
    {
        zeros++;
        x0 = x, y0 = y + 1;
    }
    else
    {
        ones++;
        x1 = x, y1 = y + 1;
    }
    if (a[x + 1][y + 1] == '0')
    {
        zeros++;
        x0 = x + 1, y0 = y + 1;
    }
    else
    {
        ones++;
        x1 = x + 1, y1 = y + 1;
    }

    ll ok = 0;
    if (zeros < ones)
    {
        vector<ll> v;
        vector<ll> add = {0, 0, 1, 0, 0, 1, 1, 1};
        for (ll i = 0; i < 8; i++)
        {
            ll a1 = x + add[i];
            i++;
            ll b = y + add[i];
            if (a1 == x0 && b == y0)
                continue;
            v.push_back(a1);
            v.push_back(b);

            a[a1][b] = (char)(1 - (int)(a[a1][b]-'0') + '0');
        }
        ans.push_back(v);
        check(a, x, y);
    }
    else
    {
        vector<ll> v;
        vector<ll> add = {0, 0, 1, 0, 0, 1, 1, 1};
        for (ll i = 0; i < 8; i++)
        { 
            ll a1 = x + add[i];
            i++;
            ll b = y + add[i];
            if (a1 == x1 && b == y1)
                continue;
            v.push_back(a1);
            v.push_back(b);
            a[a1][b] =  (char)(1 - (int)(a[a1][b]-'0')+'0');
        }
        ans.push_back(v);
        check(a, x, y);
    }
}

void solve()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m, '0'));

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = 0; j < m - 1; j++)
            {
                check(a, i, j);
            }
        }

        cout << ans.size() << endl;

        for (ll i = 0; i < ans.size(); i++)
        {
            for (ll j = 0; j < 6; j++)
            {
                cout << ans[i][j] + 1 << " ";
            }
            cout << endl;
        }
        ans.clear();
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