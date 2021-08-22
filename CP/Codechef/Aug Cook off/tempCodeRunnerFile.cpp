#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    ll t;cin>>t;
    while(t--){

        ll n;cin>>n;
        vector<ll> a(n,0);
        unordered_map<ll,ll> frq;

        for(ll i =0;i<n;i++){
            cin>>a[i];
            frq[a[i]]++;
        }

        ll m = INT_MIN;
        for(auto i:frq){
            m = max(m,i.second);
        }
        if(n==2 || n==1)
        cout<<0<<endl;
        else if(m>=2)
        cout<<n-m<<endl;
        else 
        cout<<n-2<<endl;

    }
    return 0;
}