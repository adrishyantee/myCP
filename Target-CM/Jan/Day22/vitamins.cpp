#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
       ll n; cin>>n;

       map<string,ll> mp;

       for(ll i=0;i<n;i++){
           ll x; string s;
           cin>>x>>s;
           sort(s.begin(),s.end());
           if(mp.find(s)==mp.end())
           mp[s]=x;
           else
           mp[s]=min(x,mp[s]);
       }

       ll mini=INT_MAX;

       if( mp["A"]!=0 && mp["B"]!=0 && mp["C"]!=0){
       ll sum1 = mp["A"]+mp["B"]+mp["C"];
       mini=min(mini, sum1);
       }

       if(mp["AB"]!=0 && mp["BC"]!=0){
       ll sum2 = mp["AB"]+mp["BC"];
       mini= min(mini, sum2);
       }
       if(mp["AB"]!=0 && mp["AC"]!=0){
       ll sum3 = mp["AB"]+mp["AC"];
       mini=min(mini, sum3);
       }
       if(mp["BC"]!=0 && mp["AC"]!=0){
       ll sum4 = mp["BC"]+mp["AC"];
       mini=min(mini, sum4);
       }
       if(mp["ABC"]!=0){
       ll sum5 = mp["ABC"];
       mini=min(mini, sum5);
       }
        if(mp["BC"]!=0 && mp["A"]!=0){
       ll sum4 = mp["BC"]+mp["A"];
       mini=min(mini, sum4);
       }
       if(mp["B"]!=0 && mp["AC"]!=0){
       ll sum4 = mp["B"]+mp["AC"];
       mini=min(mini, sum4);
       }
        if(mp["C"]!=0 && mp["AB"]!=0){
       ll sum4 = mp["C"]+mp["AB"];
       mini=min(mini, sum4);
       }

       if(mini==INT_MAX)
       cout<<-1<<endl;
       else
       cout<<mini<<endl;

    return 0;
}