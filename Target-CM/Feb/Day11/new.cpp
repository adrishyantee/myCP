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
    int n; cin>>n;
    int m; cin>>m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i=0; i<n;i++)
    cin>>a[i];

    for(int i=0; i<m;i++)
    cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int mid = floor((a[0]+b[m-1])/2.0);
    int mid1 = ceil((a[0]+b[m-1])/2.0);


    int val1 = 0, val2 =0;

    for(int i=0;i<n;i++){
        if(a[i]<mid)
        val1+=mid-a[i];
        if(a[i]<mid1)
        val2+=mid1-a[i]; 
    }

    for(int i=0;i<m;i++){
        if(b[i]>mid)
        val1+=b[i]- mid;
        if(b[i]>mid1)
        val2+=b[i] - mid1; 
    }

    cout<<min(val1,val2)<<endl;
    cout<<FindMinMoves(a,b)<<endl;


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