#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n+1);
        vector<ll> hash(n+1,-1);
       
        queue<ll> s;
        for(ll i=1;i<=n;i++){
            cin>>v[i];
        }
         sort(v.begin(),v.end());
         for(ll i=1;i<=n;i++){
            if(v[i]<=n && hash[v[i]]==-1)
            hash[v[i]]=1;
            else
            s.push(i);
        }
        ll count=s.size(), res=s.size();
        for(ll i=1;i<=n;i++){
                if(hash[i]!=1){
                    while(v[s.front()]%(v[s.front()]-i)==0 &&s.size()>1){
                        s.push(s.front());
                        s.pop();
                    }
                
                    v[s.front()]=s.front();
                    s.pop();
                    hash[i]=1;
                    count--;
                }
                else if(hash[i]!=1 && s.size()==1){
                cout<<-1<<endl;
                break;
                }    
            }
            if(count==0)
            cout<<res<<endl;

        }
        return 0;
}

