#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    ll t; cin>>t;

    while(t--){

    ll n,m; cin>>n>>m;
    vector<ll> ans;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ans.push_back(max(i,n-(i+1))+max(j,m-(j+1)));
        }
    }
    sort(ans.begin(),ans.end());
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    }
    return 0;
}


    

