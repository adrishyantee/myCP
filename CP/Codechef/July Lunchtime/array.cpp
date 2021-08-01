#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> cal_c(vector<ll> a,vector<ll> b, ll n){
    vector<ll> c(n);
    for(ll i=0;i<n;i++){
        c[i]=(a[i]+b[i])%n;
    }
    return c;
}

// ll calc_min(vector<ll> a,vector<ll> b, ll b1, ll b2, ll n){
//     ll i=0;
//     ll mod1 = (a[i]+b[b1])%n;
//     ll mod2 = (a[i]+b[b2]%n);
//     while(i<n-1 && mod1==mod2){
//         b1=(b1+1)%n;
//         b2=(b2+1)%n;
//         i++;
//         mod1=(a[i]+b[b1])%n;
//         mod2=(a[i]+b[b2])%n;
//     }

//     if(mod1<=mod2)
//     return b1;
//     else
//     return b2;
// }

int main(){
  
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;

        vector<ll> a(n),b(n),c;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        for(ll i=0;i<n;i++){
            cin>>b[i];
        }

        ll min_t = INT_MAX;

        for(ll i=0;i<n;i++){
            min_t=min((a[0]+b[i])%n,min_t);
        }

        vector<ll> ind;

       

        for(ll i=0,j=0;i<n;i++){
            if((a[0]+b[i])%n == min_t)
            ind.push_back(j);
            j++;
        }

        if(ind.size()==1){
            rotate(b.begin(),b.begin()+ind[0],b.end());
            c=cal_c(a,b,n);
        }

        else{
            vector<ll> b1 = b;
            vector<ll> b2 = b;
            rotate(b1.begin(),b1.begin()+ind[0],b1.end());
            rotate(b2.begin(),b2.begin()+ind[1],b2.end());
            if(b1<b2)
            c= cal_c(a,b1,n);
            else
            c=cal_c(a,b2,n);
        }

        for(ll i=0;i<n;i++){
            cout<<c[i]<<" ";
        }
    }
    return 0;
}