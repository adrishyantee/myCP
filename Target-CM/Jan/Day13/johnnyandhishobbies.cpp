#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    int t; cin>>t;

    while(t--){
        ll n;cin>>n;
        vector<ll> arr(n);

        for(ll i=0;i<n;i++)
        cin>>arr[i];
        sort(arr.begin(),arr.end());
        ll flag=0;

        ll i=0;

        for(i=1;i<1024;i++){
            vector<ll> temp;
            for(ll j=0;j<n;j++){
                // cout<<(arr[j]^i)<<endl;
                temp.push_back((arr[j]^i));
            }
            sort(temp.begin(),temp.end());
            if(temp==arr){
                flag=1;
                break;
            }
        }

        if(flag==1)
        cout<<i<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}