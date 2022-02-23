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
bool cmp(ll a, ll b) { return a > b; }
int FindMinMoves(vector<int> A, vector<int> B)
{
    int n, m;
    n = A.size();
    m = B.size();
 
    // sort the array A and B in the
    // ascending and descending order
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), cmp);
 
    ll ans = 0;
 
    // Iterate over both the arrays
    for (int i = 0; i < min(m, n)
                    && A[i] < B[i];
         ++i) {
 
        // Add the difference to the
        // variable answer
        ans += (B[i] - A[i]);
    }
 
    // Return the resultant operations
    return ans;
}

void solve()
{
    ll n; cin>>n;
    vector<ll> a(n);

   for(ll i=0;i<n;i++){
       cin>>a[i];
   }
   ll idx=0;
   ll endpoint = 0;
   ll val =0;

   for(ll i=0;i<n;i++){
       if(a[i]!=i+1){
       idx = i;
       break;
       }
   }

   for(ll i=idx+1;i<n;i++){
       if(a[i]==idx+1){
       reverse(a.begin()+idx, a.begin()+i+1);
       break;
      }
   }

   for(ll i=0;i<n;i++)
   cout<<a[i]<<" ";

   cout<<endl;

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll t; cin>>t;
    while(t--)
    solve();
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}