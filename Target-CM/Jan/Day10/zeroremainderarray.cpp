#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    map<ll,ll> mp;

    for(ll &i:a){
    cin>>i;
    if(i%k!=0)
    mp[i]++;
    }

    if(mp.size()==n)
    cout<<0<<endl;
    else{
    ll x=0, moves=0;
    
    sort(a.begin(),a.end());

    x++;
    moves++;

    for(auto i:mp){
        
    }

    }
}
