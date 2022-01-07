#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll power(ll a,int b){
    ll ans=1;
    for(int i=1;i<=b;i++)
    ans*=a;
    return ans;
}
int main(){
        ll n; cin>>n;
        ll num=n;
        int d=0;
        while(n>0){
            d++;
            n=n/10;
        }  
        ll ans = 0;
        for(int i=0;i<d-1;i++){
        ll val = power(10,i)*9;
        ans+=val*(i+1);
        }
        ll f = power(10,d-1);
        ans+=((num-f+1)*d);
        cout<<ans<<endl;
    return 0;
}