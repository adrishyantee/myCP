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
            parr[x-1]++;
        }

        while(true){
             ll flag=0;
        for(ll i=0;i<n;i++){
            if(parr[i]!=0 && arr[i]>arr[i+1]){
                flag=1;
                swap(arr[i],arr[i+1]);
            }
        }
        if(flag==0){
            break;
        }
        }
        cout<<endl;
        
        ll flag=1;
        for(ll i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;  
    }
    return 0;
}