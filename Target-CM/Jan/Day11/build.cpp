#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;


int main(){

    ll n;
    cin>>n;
    
    vector<ll> v(n);
    ll ans=0;
    for(ll i=0;i<n;i++){
    cin>>v[i];
    }
    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++){
    ans+=abs(v[i]-(i+1));
    }
    // cout<<"h"<<endl;

    cout<<ans<<endl;
    return 0;
}