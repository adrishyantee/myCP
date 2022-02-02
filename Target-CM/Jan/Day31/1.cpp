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
int CommonDigits(int N, int M)
{
    // Stores the count of common digits
    int count = 0;
 
    // Stores the count of digits of N
    int freq1[10] = { 0 };
 
    // Stores the count of digits of M
    int freq2[10] = { 0 };
 
    // Iterate over the digits of N
    while (N > 0) {
 
        // Increment the count of
        // last digit of N
        freq1[N % 10]++;
 
        // Update N
        N = N / 10;
    }
    // Iterate over the digits of M
    while (M > 0) {
 
        // Increment the count of
        // last digit of M
        freq2[M % 10]++;
 
        // Update M
        M = M / 10;
    }
    // Iterate over the range [0, 9]
    for (int i = 0; i < 10; i++) {
 
        // If freq1[i] and freq2[i] both exceeds 0
        if (freq1[i] > 0 & freq2[i] > 0) {
 
            // Increment count by 1
            count++;
        }
    }
 
    // Return the count
    return count;
}


void solve()
{
    ll t; cin>>t;
    while(t--) {

        ll n; cin>>n;

        if(n%7==0){
        cout<<n<<endl;
        continue;
    }

        n = n/10;
        n = n*10;
        for(ll i=0;i<=7;i++){
            ll num = n+i;
            if(num%7==0){
            cout<<num<<endl;
            break;
            }
        }
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