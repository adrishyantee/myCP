#include <bits/stdc++.h>
using namespace std;
#define ll long long 


// CPP program to find MSB number for given n.
#include <iostream>
using namespace std;
 
ll setBitNumber(ll n)
{
    return (ll)(log2(n));

}

int main(){

    ll t;cin>>t;
    while(t--){

    ll n;
    cin>>n;
    
    vector<ll> v(n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
    cin>>v[i];
    mp[setBitNumber(v[i])]++;
    }

    ll ans=0;

    for(auto m:mp){
        ans+=(m.second*(m.second-1))/2;
    }
    cout<<ans<<endl;

    }

    return 0;
}