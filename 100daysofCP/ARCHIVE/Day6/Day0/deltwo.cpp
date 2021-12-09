// #include <bits/stdc++.h>
// using namespace std;

// int getPairsCount(vector<long long> arr, long long n, long long k)
// {
// 	unordered_map<long long , long long> m;
// 	long long count = 0;
// 	for (long long i = 0; i < n; i++) {
// 		if (m.find(k - arr[i]) != m.end()) {
// 			count += m[k - arr[i]];
// 		}
// 		m[arr[i]]++;
// 	}
// 	return count;
// }
// int main()
// {
 
    // long long t; cin>>t;
    // while(t--){
        // long long n; cin>>n;
        // long long sum=0;
        // vector<long long> arr(n);
        // for(long long i=0;i<n;i++){
        //     cin>>arr[i];
        //     sum+=arr[i];
        // }
        // long double  m = ((long double)sum)/(long double)n;
        // long double k=m*2;
        // long long x = floor(k);
        // if((long double)x==(long double)k)
        // cout<<getPairsCount(arr,n,m*2)<<endl;
        // else cout<<0<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     int ss=0;
//     map<int, int> m;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         ss+=a[i];
//         m[a[i]]++;
//     }
 
//     double k=(double)ss/(double)n;
//     double sum=k*2.0;
//     sort(a, a+n);
//     int x=floor(sum);
//     if((double)x!=(double)sum){
//         cout<<0<<endl;  
//     }
//     else{
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans+=m[x-a[i]];
 
//         if(x==2*a[i])
//             ans--;
//     }
//     cout<<ans/2<<endl;
//     }
//     }
// 	return 0;
// }
// void Solve(){
//     int n;
//     cin>>n;
//     int a[n];
//     int ss=0;
//     map<int, int> m;
//    for(int i=0;i<n;i++) {
//         cin>>a[i];
//         ss+=a[i];
//         m[a[i]]++;
//     }
 
//     double k=(double)ss/(double)n;
//     double sum=k*2.0;
//     sort(a, a+n);
//     int x=floor(sum);
//     if((double)x!=(double)sum){
//         cout<<0;
//         return;
//     }
//     int ans=0;
// for(int i=0;i<n;i++){
//         ans+=m[x-a[i]];
 
//         if(x==2*a[i])
//             ans--;
//     }
//     cout<<ans/2;
// }
 
// signed main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
 
//     int T = 1;
//     cin>>T;
//     for(int i=0;i<T;i++)
//     {
//         //cout<<"Case #"<<i<<": ";
//         Solve();
//         cout << endl;
//     }
 
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef long double lld;
#define ull unsigned long long
#define int ll
#define rep(i, m, n) for (int i = m; i < n; i++)
#define rev(i, n, m) for(int i=n-1; i>=m; i--)
#define pb push_back
#define endl '\n'
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) ((int)(x).size())
#define SET(n) cout << fixed << setprecision(n)
#define pii pair<int, int>
#define vi vector<int> 
#define vpii vector<pii> 
#define clr(x) memset(x, 0, sizeof(x))
#define mset(x, a) memset(x, a, sizeof(x))
#define M 1000000007
#define MM 998244353
#define INF 1e18
#define PI 3.141592653589793238462
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void print(const T *const arr, int count) {for (int i = 0; i < count; ++i) {_print(arr[i]); cerr<<" ";} cerr<<endl;}
 
void Solve(){
    int n;
    cin>>n;
    int a[n];
    int ss=0;
    map<int, int> m;
    rep(i, 0, n){
        cin>>a[i];
        ss+=a[i];
        m[a[i]]++;
    }
 
    double k=(double)ss/(double)n;
    double sum=k*2.0;
    sort(a, a+n);
    int x=floor(sum);
    if((double)x!=(double)sum){
        cout<<0;
        return;
    }
    int ans=0;
    rep(i, 0, n){
        ans+=m[x-a[i]];
 
        if(x==2*a[i])
            ans--;
    }
    cout<<ans/2;
}
 
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int T = 1;
    cin>>T;
    rep(i, 1, T+1)
    {
        //cout<<"Case #"<<i<<": ";
        Solve();
        cout << endl;
    }
 
    return 0;
}