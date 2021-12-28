#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e3+5;
int n;


map<pair<int,int>,int> ans;
pair<int,int> a[N];
map<pair<int,int>,bool>mp;

void solve(int s, int e){
    if(s==e){
    ans[{s,e}] = s;
    return;
    }

    for(int i=s;i<=e;i++){
        if(i==s){
            if(mp[{i+1,e}]){
                ans[{s,e}]=i;
                solve(i+1,e);
                break;
            }
            }
            else if(i==e){
                if(mp[{s,i-1}]){
                    ans[{s,e}]=i;
                    solve(s,i-1);
                    break;
                }
            }
        else{
            if(mp[{s,i-1}] && mp[{i+1,e}]){
                ans[{s,e}]=i;
                solve(s,i-1);
                solve(i+1,e);
                break;
            }
        }
    }
}
int main(){

    ll t; cin>>t;
    while(t--){
    ll n; cin>>n;
    mp.clear();
    ans.clear();
    int s=1,e=n;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        mp[{a[i].first,a[i].second}]=true;
    }
    solve(s,e);
    for(auto it:mp){
        if(ans[it.first])
        cout<<it.first.first<<" "<<it.first.second<<" "<<ans[it.first]<<endl;
    }
    cout<<endl;
    }
    return 0;
}