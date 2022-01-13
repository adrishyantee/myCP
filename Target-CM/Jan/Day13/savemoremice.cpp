#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll t; cin>>t;
    while(t--){

    ll n,k;
    cin>>n>>k;

    vector<ll> arr(k);

    for(ll i=0;i<k;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end(),greater<int>());
    
    arr[0]=n-arr[0];

    for(ll i=1;i<k;i++){
        arr[i]=arr[i-1]+(n-arr[i]);
    }

    ll idx = lower_bound(arr.begin(),arr.end(),n)-arr.begin();

    cout<<idx<<endl;

    }


    return 0;
}

