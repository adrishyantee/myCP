#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    vector<ll> stones(n), sortedstones(n);
    for(ll i=0;i<n;i++)
    cin>>stones[i];

    sortedstones=stones;
    sort(sortedstones.begin(),sortedstones.end());
    for(ll i=1;i<n;i++){
        stones[i]+=stones[i-1];
        sortedstones[i]+=+sortedstones[i-1];
    }

    ll m; cin>>m;
    while(m--){
        int ch;
        ll l,r; 
        cin>>ch>>l>>r;
        ll sum=0;
        if(ch==1){
            if(l-2==-1) sum=stones[r-1];
            else
            sum=stones[r-1]-stones[l-2];
            }

            else{
            if(l-2==-1) sum=sortedstones[r-1];
            else
            sum=sortedstones[r-1]-sortedstones[l-2];
            }
        cout<<sum<<endl;
        
    }
    return 0;
}