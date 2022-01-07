#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;

    while(t--){
        ll n,k; cin>>n>>k;
        vector<int> a(n);
        map<int,int> mp;
        vector<int> ans;

        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]==1)
            ans.push_back(a[i]);
        }
        if(mp.size()>k)
        {
            cout<<-1<<endl;
            continue;
        }

        while(ans.size()!=k)
           ans.push_back(1);
        
        int cnt=n*(k);

        cout<<cnt<<endl;

        for(int i=0;i<n;i++){ 
        for(auto an:ans)
            cout<<an<<" ";
        } 
        cout<<endl;   
    }
    return 0;
}