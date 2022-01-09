#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool compare(pair<ll,ll> a, pair<ll,ll> b){
    if(a.first<b.first)
    return true;
    else if(a.first==b.first && a.second<b.second)
    return true;
    else
    return false;
}

int main(){
    ll t; cin>>t;

    while(t--){

    ll n; cin>>n;
    vector<pair<ll,ll>> p(n);

    for(ll i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
     }
    sort(p.begin(),p.end(), compare);
    string ans = "";
    ll row=0,col=0;
    int flag=0;
    for(ll i=0;i<n;i++){
        if(p[i].second-col>=0 && p[i].first-row>=0){
            while(row<p[i].first){
                row++;
                ans+='R';
            }
            while(col<p[i].second){
                col++;
                ans+='U';
            }
        }
        else{
            flag=1;
            break;
        }
      }
      if(flag==0){
      cout<<"YES"<<endl;
      cout<<ans<<endl;
      }
      else
      cout<<"NO"<<endl;
    }
     return 0;
}