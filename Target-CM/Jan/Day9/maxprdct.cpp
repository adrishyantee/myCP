#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;
    while(t--){

        ll n;
        cin>>n;
        vector<ll> a(n);


        for(ll &i:a)
        cin>>i;

        sort(a.begin(),a.end());

        ll p1=a[0]*a[n-1]*a[n-2]*a[n-3]*a[1];
        ll p2=a[0]*a[n-1]*a[3]*a[2]*a[1];
        ll p3=a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];

        cout<<max(p1,max(p2,p3))<<endl;

    }
    return 0;
}