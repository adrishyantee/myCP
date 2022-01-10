#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll t; cin>>t;
    while(t--)
{
    ll n; cin>>n;
    vector<ll> a(n);

    for(ll &i:a)
    cin>>i;

    sort(a.begin(),a.end());

    cout<<a[n-1]-a[0]<<endl;}
    return 0;
}
