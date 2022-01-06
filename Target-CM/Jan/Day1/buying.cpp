#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    ll t; cin>>t;
    while(t--){
        ll n, k; cin>>n>>k;
        if(k>=n)
        cout<<1<<endl;
        else{
            ll ans = 0;
            for(ll i=1;i<=(ll)sqrt(n);i++)
            {
                if(n%i==0){
                    if(i<=k)
                    ans= max(ans,i);
                    if((n/i)<=k)
                    ans = max(ans,n/i);
                }
            }
            cout<<n/ans<<endl;
        }
    }
    return 0;
}
