#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll t; cin>>t;
    while(t--){

    ll n; cin>>n;

    vector<ll> dist(n);

    for(ll i=0;i<n;i++){
        cin>>dist[i];
    }

    sort(dist.begin(),dist.end());
    ll sum=dist[n-1];

    ll neg=0;

    for(ll i=1;i<n;i++){
        neg=(i)*(dist[i]-dist[i-1]) + neg; 
        sum-=neg;
    }

    cout<<sum<<endl;

    }

    return 0;

    
}