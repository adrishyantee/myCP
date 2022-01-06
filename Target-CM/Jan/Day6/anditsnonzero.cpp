#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    vector<vector<ll>> arr(200001, vector<ll> (19, 0));
    for(ll j=1;j<200001;j++){
        for(ll i=0;i<19;i++){
            ll mask = (1<<i);
            arr[j][i]=arr[j-1][i];
            if((j&mask)!=0)
            arr[j][i]++;
            }
    }

    ll t; cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll maxi=0;
        for(ll i=0;i<19;i++)
        maxi = max(maxi, arr[r][i]-arr[l-1][i]);
        
        cout<<(r-l+1)-maxi<<endl;
    }

    return 0;
}