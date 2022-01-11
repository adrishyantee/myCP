#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
 
bool recursion(ll n,ll i,ll sum, vector<ll> &a)
{

    if(i==n && (sum==0|| sum%360==0))
    return true;
    else if(i==n && sum!=0)
    return false;
    bool ans1= recursion(n,i+1,sum+a[i],a);
    bool ans2= recursion(n,i+1,sum-a[i],a);

    return (ans1 || ans2);
}

int main(){

    ll n;
    cin>>n;
    
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
    cin>>v[i];
    }
    // cout<<"h"<<endl;

    string ans = (recursion(n,0,0,v))?"YES":"NO";
    cout<<ans<<endl;
    return 0;
}