#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;

    while(t--){
        ll n; cin>>n;

        ll ans = (ll)pow(2,(ll)log2(n))-1;

        cout<<ans<<endl;
    }
    return 0;
}