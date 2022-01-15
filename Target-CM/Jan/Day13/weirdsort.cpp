#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    int t; cin>>t;

    while(t--){
        ll n,p;cin>>n>>p;
        vector<ll> arr(n);
        map<ll,ll>parr;

        for(ll i=0;i<n;i++)
        cin>>arr[i];

        
        for(ll i=0;i<p;i++)
        {
            ll x; cin>>x;
            parr[x]++;
        }
        ll flag=0;

        for(ll i=0;i<n-1;i++){
            if(arr[i]>arr[i+1] && parr[i+1]==0){
            flag=1;
            break;
            }
            else if(arr[i]>arr[i+1] && parr[i+1]!=0){
                swap(arr[i],arr[i+1]);
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;  
    }
    return 0;
}