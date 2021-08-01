#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
  
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;

        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        unordered_map<ll,ll> freq;

        for(ll i:a){
            if(freq.find(i)!=freq.end())
            freq[i]++;
            else{
                freq.insert({i,1});
            }
        }

        ll ans = n*(n-1);
    
        for(auto p:freq){
            if(p.second >1){
                ans-=(p.second*(p.second-1));
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}