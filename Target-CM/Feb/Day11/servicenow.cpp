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
long long countSub(vector<int> s)
{
    map<int, int> Map;
 
    // Iterate from 0 to s.length()
    for(int i = 0; i < s.size(); i++)
    {
        Map[s[i]] = -1;
    }
      
    int allCount = 0;
    int levelCount = 0;
      
    // Iterate from 0 to s.length()
    for(int i = 0; i < s.size(); i++)
    {
        int c = s[i];
         
        // Check if i equal to 0
        if (i == 0)
        {
            allCount = 1;
            Map [c]= 1;
            levelCount = 1;
            continue;
        }
         
        // Replace levelCount withe
        // allCount + 1
        levelCount = allCount + 1;
         
        // If map is less than 0
        if (Map[c] < 0)
        {
            allCount = allCount + levelCount;
        }
        else
        {
            allCount = allCount +
                     levelCount- Map[c];
        }
        Map[c] = levelCount;
    }
     
    // Return answer
    return allCount;
}


void solve()
{

    long long mod = 1e9+7;
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    vector<int> pos;
    vector<int> neg;

    int zeros=0;

    for(int i=0;i<n;i++){
        if(arr[i]>0)
        pos.push_back(arr[i]);
        else if(arr[i]<0)
        neg.push_back(arr[i]);
        else
        zeros++;
    }
    if(zeros==0)
    cout<<0<<endl;
    else
    cout<<((countSub(pos)%mod+countSub(neg)%mod+1%mod)%mod*zeros%mod)%mod<<endl;
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