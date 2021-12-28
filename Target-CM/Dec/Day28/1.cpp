#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t; cin>>t;
    while(t--){
        ll n,m, rb,cb, rd, cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;

        ll t= 0;
        ll dr=1,dc=1;

        while(true){
            if(rb==rd|| cb==cd)
            break;

            if(rb+dr < 1 ||rb+dr> n){
              dr=dr*(-1);
            }
            if(cb+dc <=0||cb+dc> m){
              dc=dc*(-1);
            }
            rb+=dr;
            cb+=dc;
            t++;
        }
        cout<<t<<endl;
    }
    return 0;
}