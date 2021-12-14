#include <bits/stdc++.h>
using namespace std;
#define ll long long int 


// int power(ll x, unsigned ll y, ll p)
// {
//     int res = 1;   
 
//     x = x % p; 
  
//     if (x == 0) return 0; 
 
//     while (y > 0)
//     {
//         if (y & 1)
//             res = (res*x) % p;
//         y = y>>1;
//         x = (x*x) % p;
//     }
//     return res;
// }
// ll calculate(ll k, ll sum){
//     ll p = 1000000007;
//     ll res= power(2,k,p);
//     ll d = (sum%p) - ((k+1)%p);
//     res= (res + d)%p;
//     return res;
// }
int main(){


int t; cin>>t;
while(t--){
   ll n; cin>>n;
    vector<ll> arr(n);
    map<int,int> mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    ll ans =1;
    for(auto it:mp){
        int f = it.second;
        ans*=(f+1);
        ans%=1000000007;
    }
    ans--;
    cout<<ans<<endl;
       // cout<<calculate(k,sum)<<endl;
}
return 0;
}