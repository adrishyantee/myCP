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

void solve()
{

    int n; cin>>n;

    vector<vector<int>> coordinates(n,vector<int>(3,0));


    for(int i = 0;i<n;i++){
        cin>>coordinates[i][0]>>coordinates[i][1]>>coordinates[i][2];
    }

    double ans = 0;

    double a = coordinates[0][0];
    double b = coordinates[0][1];
    double c = coordinates[0][2];


    for(int i = 1 ;i<n;i++){

        // if same plane

     double curra = coordinates[i][0];
     double currb = coordinates[i][1];
     double currc = coordinates[i][2];



        if(curra == a && currb == b ){
            ans += (double)abs(currc - c)*2*22/42;
        }
        else if(curra == a && currc == c){
             ans += (double)abs(currb - b)*2*22/42;
        }
        else if(currc == c && currb == b ){
             ans += (double)abs(curra - a)*2*22/42;
        }
        else{
           //opposite

           if(abs(curra-a)==10 || abs(currb-b)==10 || abs(currc-c)==10)
           {

           }
           
            //adjacent

            

        }

        // if not same plane

        ans = round(ans);
        a = curra;
        b = currb;
        c = currc;
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