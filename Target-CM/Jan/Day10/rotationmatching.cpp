#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll n; cin>>n;
    vector<ll> a(n),b(n);

    for(ll &i:a)
    cin>>i;

    for(ll &i:b)
    cin>>i;

    map<ll,ll> mp;
    vector<ll> hash(n+1);

    for(ll i=0;i<n;i++){
        hash[b[i]]=i;
    }

    for(ll i=0;i<n;i++){
        ll j = hash[a[i]];
            if((j-i)>=0){
                mp[(j-i)]++;
                }
                else{
                mp[n-i+j]++;
                }
     }

    ll maxi=LONG_MIN;
    for(auto i:mp){
        maxi=max(maxi,i.second);
    }

    cout<<maxi<<endl;



    return 0;
}
