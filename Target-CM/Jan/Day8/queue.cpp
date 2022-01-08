#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);

    for(ll &e: a)
    cin>>e;
    
    sort(a.begin(),a.end());
    ll sum=a[0],d=0;

    for(ll i=1;i<n;i++){
        if(a[i]<sum)
        d++;
        else
        sum+=a[i];
    }
    cout<<n-d<<endl;

    return 0;
}