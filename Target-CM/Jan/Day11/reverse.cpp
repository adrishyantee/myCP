#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
 
 
int main(){
 ll t; cin>>t;

 while(t--){
     ll n; cin>>n;
     string s; cin>>s;
     string s1=s;

     sort(s.begin(),s.end());
     vector<ll> pos;

     int cnt=0;

     for(ll i=0;i<n;i++){
         if(s1[i]!=s[i]){
            cnt++;
         pos.push_back(i+1);
         }
     }
     if(cnt==0)
     cout<<0<<endl;
     else{
     cout<<1<<endl;
     cout<<cnt<< " ";
     for(int i=0;i<cnt;i++)
     cout<<pos[i]<<" ";
     cout<<endl;
     }
 }
 return 0;
}
