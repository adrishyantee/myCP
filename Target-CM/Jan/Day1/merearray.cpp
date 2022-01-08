#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t; cin>>t;
    while(t--){
    ll n;
    cin >> n;
    vector<ll> a(n),b;

    for(ll &e: a)
    cin>>e;

    b=a;

    sort(a.begin(),a.end());
    ll m=a[0];
    int f=0;
    for(ll i=0;i<n;i++){
        if(a[i]%m!=0 && a[i]!=b[i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }

    return 0;
}
