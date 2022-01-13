#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll test; cin>>test;
    while(test--){

    ll n; cin>>n;
    vector<ll> arr(n);
   

    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    if(arr[0]>arr[n-1])
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    }


    return 0;
}