#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll t; cin>>t;
    map<ll,vector<ll>> mp;
    vector<ll> arr;
    
    while(t--){
        ll ch; cin>>ch;
        ll x,y;

        if(ch == 1){
            cin>>x;
            arr.push_back(x);
            if(mp.find(x)!=mp.end()){
            mp[x].push_back(arr.size()-1);
            }
            else{
                vector<ll> v;
                v.push_back(arr.size()-1);
                mp[x]=v;
            }


        }
        else{
            cin>>x>>y;
            vector<ll> v = mp[x];
            mp.erase(x);
            for(auto i:v)
            {
                arr[i]=y;
                mp[y].push_back(i);
            }
        }
    }
        for(auto i:arr)
        cout<<i<<" ";
        cout<<endl;
}