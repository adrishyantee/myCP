#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ll t; cin>>t;

    while(t--){
        ll n, k, x;
        cin>>n>>k>>x;
        vector<ll> a(n);

        for(ll i =0;i<n;i++)
        cin>>a[i];

        sort(a.begin(),a.end());

        ll res=0;
        ll i =n-1 ;
        while(i>=0){
            if(a[i]+a[i-1]>=x && k>0 && i>=1)
            {
            k--;
            res+=x;
            i--,i--;
            }
            else{
            res+=a[i];
            i--;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}