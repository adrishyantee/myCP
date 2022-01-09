#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;
    while(t--){

        ll n,r; cin>>n>>r;

        if(n<1){
            cout<<1<<endl;
        }
        else
        {
            if(n<=r){
                cout<<1+((n-1)*(n))/2<<endl;

            }
            if(n>r){
                cout<<(r*(r+1))/2<<endl;

            }
        }   
    }
    return 0;
}