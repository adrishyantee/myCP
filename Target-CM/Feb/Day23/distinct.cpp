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
bool isSuffix(string s1, string s2)
{
    int n1 = s1.length(), n2 = s2.length();
    if (n1 > n2)
      return false;
    for (int i=0; i<n1; i++)
       if (s1[n1 - i - 1] != s2[n2 - i - 1])
           return false;
    return true;
}
bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return false;
    }
}

void solve()
{
   ll t; cin>>t;
   while(t--){
        string s;
        cin>>s;
        string st = s; //original
        
        reverse(s.begin(),s.end());
        ll i=0,j=0;
        ll n = s.length();


        ll count=0;
        map<char,int> mp;
        while(i<n && j<n){
            if(st[i]==s[j]){
                i++;
                j++;
            }

            else if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
                if(mp[s[i]]==0)
                mp.erase(s[i]);
            }
            else{
                mp[st[i]]++;
                i++;
                count++;
            }


        }
        cout<<count<<endl;
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