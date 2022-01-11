#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll t;cin>>t;
    while(t--){

    ll n; string s1,s2; 
    cin>>n;
    cin>>s1>>s2;
    ll cnt=0;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            cnt++;
            v.push_back(i+1);
            v.push_back(1);
            v.push_back(i+1);
        }
     }

     cout<<cnt*3<<endl;
     for(ll i=0;i<v.size();i++)
     cout<<v[i]<<" ";
     cout<<endl;
    }

    return 0;
}
