#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n; cin>>n;
    map<ll,pair<ll,pair<ll,ll>>>mp;

    for(ll i=1;i<=n;i++){
        int x,y; cin>>x>>y;
        mp[i].first=x;
        mp[i].second.first=y;
        mp[i].second.second=y;
    }
    //1-can be deleted
    //0- can't be deleted

    for(ll i=1;i<=n;i++){
        ll parent = mp[i].first;
        ll c=mp[i].second.first;//disrespects
        ll canbedel = mp[i].second.second;

        if(c==0 && parent!=-1){
            mp[parent].second.second=0;
        }
    }
    ll cnt=0;

    for(ll i=1;i<=n;i++){
        if(mp[i].second.second==1){
        cnt++;
        cout<<i<<" ";
    }
    }
    if(cnt==0)
    cout<<-1<<endl;
    else
    cout<<endl;



    return 0;

}