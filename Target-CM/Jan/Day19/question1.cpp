#include <bits/stdc++.h>
#define ll long long 
using namespace std;

bool ispowerof2(ll n){
    double long val = log2(n);
    return ceil(val)==floor(val);
}
int main(){
    ll t; cin>>t;

    while(t--){
        ll n; cin>>n;
        if(n==0)
        cout<<0<<endl;
        else if(ispowerof2(n))
        cout<<log2(n)<<endl;
        else if(n%2==0){
            ll cnt=0;
            while(n%2==0){
                cnt++;
                n/=2;
            }
            cout<<cnt<<endl;
        }
        
        else
        cout<<0<<endl;

    }
    return 0;
}