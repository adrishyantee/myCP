#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	set<char> st;
	for (ll i = 0; i < k; i++) {
		char c;
		cin >> c;
		st.insert(c);
	}
	
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ll j = i;
		while (j < n && st.count(s[j])) 
        j++;
		ll len = j-i;
		ans += len*(len + 1) / 2;
		i = j;
	}
	cout << ans << endl;
	return 0;
    }

// struct hash_pair {
//     template <class T1, class T2>
//     size_t operator()(const pair<T1, T2>& p) const
//     {
//         auto hash1 = hash<T1>{}(p.first);
//         auto hash2 = hash<T2>{}(p.second);
//         return hash1 ^ hash2;
//     }
// };

// int main(){
//    ll n,k;
//    cin>>n>>k;
//    string s; cin>>s;
//    unordered_map<pair<ll,ll>,bool, hash_pair> dp;

//    map<char,ll> key;

//    for(ll i=0;i<k;i++)
//    {
//        char x; cin>>x;
//        key[x]++;
//    }

//    ll ans=0;

//    for(ll i=0;i<n;i++){
//    if(key.find(s[i])!=key.end()){
//    dp[{i,i}]=true;
//    ans++;
//    }
//    else
//    dp[{i,i}]=false;
//    }


//    for(ll i=0;i<n-1;i++){
//        if(dp[{i,i}]){
//        for(ll j=i+1;j<n;j++){
//            if(dp[{i,j-1}] && dp[{j,j}]){
//            dp[{i,j}]=true;
//            ans++;
//            }
//            else
//            dp[{i,j}]=false;
//          }
//        }
//    }
//    cout<<ans<<endl;
//     return 0;
// }
