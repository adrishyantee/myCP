#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll t; cin>>t;
    while(t--){

    ll n; cin>>n;
    vector<ll> a(n);

    for(ll &i:a)
    cin>>i;

    map<ll,pair<ll,ll>> mp;

    for(ll i=0;i<n;i++){
        ll nums=a[i];
        // mp.insert({nums,{1,a[i]}});   
        // nums/=2;
        while(nums>0){
            //    cout<<"check"<<endl;
            if(mp.find(nums)==mp.end())
            mp.insert({nums,{1,a[i]}});
            else{
            mp[nums].first++;
            }
            nums/=2;
        }
        // cout<<"check"<<endl;
     }
     ll flag=0;
     for(ll i=n;i>=1;i--){
        //  cout<<mp[i].second<<endl;
         if(mp[i].first==1){
            //  mp[n].first--;
             ll num=mp[i].second;
             while(num>0){
                mp[num].first--;
                num/=2;
             }
         }
         else if(mp[i].first==0){
         cout<<"NO"<<endl;
         flag=1;
         break;
        }
     }
     if(flag==0)
     cout<<"YES"<<endl;
    }
    return 0;
}

