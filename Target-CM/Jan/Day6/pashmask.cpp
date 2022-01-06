#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n; cin>>n;
     vector<ll> a(n);
     map<ll,ll> mp;

     for(ll i=0;i<n;i++){
     cin>>a[i];
     mp[a[i]]++;
     }

     sort(a.begin(), a.end());

     ll mini = a[0], maxi= a[n-1];
     ll i = 0,j=n-1;
     ll countmin = mp[a[0]], countmax=mp[a[n-1]];
     if(mp.size()==1 && n==1)
     cout<<a[n-1]-a[0]<<" "<<1<<endl;
     else if(mp.size()==1)
     cout<<a[n-1]-a[0]<<" "<<(mp[a[0]]*(mp[a[0]]-1))/2<<endl;
     else
     cout<<a[n-1]-a[0]<<" "<<countmax*countmin<<endl;
    return 0;
}