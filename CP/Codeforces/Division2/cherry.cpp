#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t; cin>>t;

    while(t--){

    ll n; cin>>n;

    vector<ll> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    ll sol=0;
    for(int i = 1;i<n;i++){
        sol=max(sol,v[i-1]*v[i]);
    }
    
    cout<<sol<<endl;    
    }
    return 0;
}