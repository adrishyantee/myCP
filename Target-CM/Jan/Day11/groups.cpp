#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
 
 
int main(){
 ll t; cin>>t;

 while(t--){
     ll n; cin>>n;


     vector<vector<ll>> st(n,vector<ll> (5,0));
     for(ll i=0;i<n;i++){
         for(ll j=0;j<5;j++){
             cin>>st[i][j];
         }
     }

    ll flag=0;
    for(ll i=0;i<5 && flag==0;i++){
        for(ll j=0;j<5 && flag==0;j++){

            if(i!=j){
            ll nomark=0,fimark=0,secmark=0;

                for(ll k=0;k<n;k++){
                    if(st[k][i]==0 && st[k][j]==0)
                    nomark++;
                    if(st[k][i]==1)
                    fimark++;
                    if(st[k][j]==1)
                    secmark++;
                }
                if(nomark==0 && fimark>=(n/2) && secmark>=(n/2)){
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 }

 return 0;
}
