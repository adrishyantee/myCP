#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll test; cin>>test;
    while(test--){

    ll n; cin>>n;
    vector<ll> arr(n);
    ll flag=0;

    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }


    ll sum = 0;
    for(ll i = 0 ; i < n ; i++){
        sum += arr[i];
        if(sum <= 0) {
        flag=1;
        cout<<"NO"<<endl;
        break;
        }

    }
    sum = 0;
    if(flag==0){
    for(ll i = n - 1 ; i >= 0 ; i--){
        sum += arr[i];
        if(sum <= 0){
        flag=1;
        cout<<"NO"<<endl;
        break;
        }
        }
    }
    if(flag==0)
    cout<<"YES"<<endl;
    }

    return 0;
}