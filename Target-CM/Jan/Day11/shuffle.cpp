#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;


int main(){

    ll t;cin>>t;
    while(t--){
        ll n,x,m; cin>>n>>x>>m;

        ll left = x;
        ll right=x;

        for(ll i=0;i<m;i++){
            ll l,r; cin>>l>>r;

            if(left>=l && left<=r)
            left=l;
            if(right>=l && right<=r)
            right=r;
        }
        cout<<right-left+1<<endl;
    }


    return 0;
}