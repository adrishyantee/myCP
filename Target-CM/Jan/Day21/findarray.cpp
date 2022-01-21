#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;

    while(t--){
        ll n; cin>>n;
        vector<ll> arr(n);
        ll sum=0;
        ll sumeven=0;

        vector<ll> bodd(n);
        vector<ll> beven(n);

        ll evenones =0;


        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(i%2==0){
            beven[i]=arr[i];
            bodd[i]=1;
            sumeven+=arr[i];
            }
            else{
            beven[i]=1;
            bodd[i]=arr[i];
            evenones++;
            }
        }

        long double ch = sum/2.0;

        //taking odd array

        if(sumeven - evenones < ch){
            for(ll i=0;i<n;i++){
                cout<<bodd[i]<<" ";
            }
        }
        else{
            for(ll i=0;i<n;i++){
                cout<<beven[i]<<" ";
            }
        }

        cout<<endl;
    
    }

    return 0;
}