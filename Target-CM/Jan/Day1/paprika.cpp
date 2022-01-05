#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;

        vector<ll> arr(n);
        map<ll,ll> mp;
        vector<ll> change;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            if(mp[arr[i]]>1 || arr[i]>n)
            change.push_back(arr[i]);
        }

        ll size = change.size();

        sort(change.begin(), change.end(), greater<int>());
        int flag =0;
        for(int i=1;i<=n;i++){
          if(mp.find(i)==mp.end()){
              ll a = change.back();
              change.pop_back();

              if(a%(a-i)==i)
              continue;

              else{
              cout<<-1<<endl;
              flag=1;
              break;
              }
          }
       }
       if(flag==0)
       cout<<size<<endl;
    }
    return 0;
}