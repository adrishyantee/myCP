#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t; cin>>t;
    while(t--){
    ll n;
    cin >> n;
    vector<ll> a(n);

    for(ll &e: a)
    cin>>e;

    ll al=0,b=0,preval=0,prevb=0;

    ll i=0,j=n-1;
    ll t=0,moves=0;
    ll totalal=0,totalb=0;

    while(i<=j){
        if(t==0){
            while(al<=prevb && i<=j){
            al+=a[i];
            i++;
            }
            preval=al;
            al=0;
            totalal+=preval;
        }
        else if(t==1){
            while(b<=preval && j>=i){
            b+=a[j];
            j--;
            }
            prevb=b;
            b=0;
            totalb+=prevb;
        }
        t=1-t;
        moves++;
    }
    cout<<moves<<" "<<totalal<<" "<<totalb<<endl;
    }

    return 0;
}
