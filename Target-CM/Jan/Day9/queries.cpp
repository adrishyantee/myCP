#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

        ll n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());

        for(ll k=0;k<m;k++){
            ll idx = (upper_bound(a.begin(),a.end(), b[k])-a.begin());
            cout<<idx<<" ";
        }
        cout<<endl;
    return 0;
}