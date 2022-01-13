#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll test; cin>>test;
    while(test--){
        ll m,x;
        cin>>m>>x;

        m=m-1;

        vector<ll> arr(x);

        arr[0]=1;
        int val;

        for(ll i=1;i<x;i++){
            val=(m%(i+1))+1;
            if(arr[i-1]<val)
            arr[i]=arr[i-1];
            else
            arr[i]=arr[i-1]+1;
        }

        for(ll i=0;i<x;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}