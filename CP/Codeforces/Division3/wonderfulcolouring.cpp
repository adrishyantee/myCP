#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    
    while(t--){
        ll n , k;
        cin>>n>>k;
        vector<ll> s(n);

        for(ll i=0;i<n;i++){
        cin>>s[i];
        }

    unordered_map<int,int> mp;

    for(ll i =0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end())
        mp[s[i]]++;
        else
        mp.insert({s[i],1});
    }
        vector<ll> l2;
        ll temp=0,sol=0;
        for(auto i:mp){
            if(i.second>=k){
            sol++;
            mp[i.first]=1;
            }
            else if(i.second<k){
            temp+=i.second;
            l2.push_back(i.first);
           }
        }
      
        int all_c = 1;
        vector<ll> ans;

        for(ll i=0;i<n;i++){
            if(l2.end()!=find(l2.begin(),l2.end(),s[i])){
                ans.push_back(all_c);
                all_c++;
                if(all_c==sol+1)
                all_c=1;
            }
            else if(mp.find(s[i])!=mp.end()){
                ans.push_back(mp[s[i]]);
                if(mp[s[i]]>0)
                mp[s[i]]++;
                if(mp[s[i]]==sol+1)
                mp[s[i]]=0;
            }
            for(ll i:ans)
            cout<<i<<" ";
        }
    cout<<endl;
    }
    return 0;
}