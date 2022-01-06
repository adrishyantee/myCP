#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        vector<char> a(n,'a');
    if(n==1)
    cout<<a[0]<<endl;
    else{
    ll sum=0;
    ll i;
    for(i=2;i<=n;i++){
        sum = i*(i-1)/2;
        if(sum>=k)
        break;
    }
    a[n-i]='b';
    a[n-i+1+(sum-k)]='b';
    for(auto i:a)
    cout<<i;

    cout<<endl;
    }
    }
    return 0;
}