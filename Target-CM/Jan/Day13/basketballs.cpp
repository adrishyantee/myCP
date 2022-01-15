#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){


    ll n; cin>>n;

     vector<ll> r1(n),r2(n);

     for(ll i=0;i<n;i++){
         cin>>r1[i];
     }
     
     for(ll i=0;i<n;i++){
      cin>>r2[i];   
     }

     for(ll i=1;i<n;i++){
         r1[i]=max(r2[i-1]+r1[i],max(r1[i-1],r2[i-1]));
         r2[i]=max(r1[i-1]+r2[i],max(r1[i-1],r2[i-1]));
     }

     cout<<max(r1[n-1],r2[n-1])<<endl;




    return 0;

}