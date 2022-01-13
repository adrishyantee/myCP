#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll test; cin>>test;
    while(test--){
        ll n,l,k; cin>>n>>l>>k;
        vector<pair<ll,bool>> c(n);
        vector<ll> t(n);

        for(ll i=0;i<n;i++){
            cin>>c[i].first;
            c[i].second=true;
        }

        //calculate net dist
        ll netdists = 0;

        for(ll i=0;i<n;i++){
            cin>>t[i];
            
        }

        for(ll i=1;i<n;i++){
            netdists += (c[i].first-c[i-1].first)*t[i-1];
        }
        netdists+=(l-c[n-1].first)*t[n-1];

        cout<<netdists<<endl;



        
        vector<pair<ll,ll>> netdist(n);
        netdist[0]={0,0};

        for(ll i=1;i<n;i++){
            //remove one of them
            if(i!=n-1)
            netdist[i]={netdists+(c[i+1].first-c[i].first*(c[i].first-c[i-1].first)),i};
        }
        netdist[n-1]={netdists+(l-c[n-1].first*(c[n-1].first-c[n-2].first)),n-1};


        sort(netdist.begin(),netdist.end());
        
        while(k!=0){
            c[netdist.back().second].second=false;
            netdist.pop_back();
            k--;
        }


        ll val = c[0].first;
        ll time=t[0];
        ll totaldist=0;
        for(int i=1;i<netdist.size();i++){
            if(c[i].second==true){
                totaldist+=(c[i].first-val)*time;
                val=c[i].first;
                time=t[i-1];
        }
        netdists += (l-val)*time;
        }
        cout<<netdists<<endl;
    }
    return 0;
}