#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
        }
        ll sum=0;
        for(auto i:mp){
            
            if(i.first!=0 && mp.find(i.first*(-1))!= mp.end())
            {
                if(i.second>=1 && mp[i.first*(-1)]>=1)
                sum+=1;
                else if(i.second>1)
                sum+=2;
                else
                sum+=1;
            }            
            else if( i.first!=0 && i.second>1 )
            sum+=2;  
            else
            sum+=1;
        }
        cout<<sum<<endl;
    }
    return 0;
}