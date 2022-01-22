#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;

    while(t--){
        ll a,b; cin>>a>>b;

        ll ans=0;

        ll size = max((ll)log2(a),(ll)log2(b));

        for(ll i=size;i>=0;i--){

            ll k1 = a>>i;
            ll k2 = b>>i;
            ll get = (k1&1);
            ll get2 = (k2&1);
            if(get!=get2){
                ans|=1<<i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}