#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll t; cin>>t;
    while(t--){
        ll w,h; cin>>w>>h;
        //first side
        ll f; cin>>f;
        vector<ll> fs(f);
        for(int i=0;i<f;i++)
        cin>>fs[i];

        ll s; cin>>s;
        vector<ll> ss(s);
        for(int i=0;i<s;i++)
        cin>>ss[i];

        ll th; cin>>th;
        vector<ll> ts(th);
        for(int i=0;i<th;i++)
        cin>>ts[i];

        ll fr; cin>>fr;
        vector<ll> frs(fr);
        for(int i=0;i<fr;i++)
        cin>>frs[i];

        ll maxi=INT_MIN;
        ll val=0,val1=0;

        //case 1

        val = abs(fs[f-1]-fs[0]);
        val1= abs(ss[s-1]-ss[0]);

        maxi = max(max(val1, val)*h,maxi);

        val = abs(ts[th-1]-ts[0]);
        val1= abs(frs[fr-1]-frs[0]);

        maxi = max(max(val1, val)*w,maxi);

        cout<<maxi<<endl; 
    }


    return 0;

}