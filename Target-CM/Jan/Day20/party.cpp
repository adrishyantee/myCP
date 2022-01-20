#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>> mp;

int maxdepth(int key){
    if(mp.find(key)==mp.end())
    return 1;
    // cout<<"here"<<endl;
    int maxi = 0;
    for(auto m:mp[key]){
        maxi=max(maxi,maxdepth(m));
    }
    return (maxi+1);

}

int main(){

    int n; cin>>n;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        mp[x].push_back(i+1);
    }

    int ans=0;
    for(int i=0;i<mp[-1].size();i++){
        ans=max(ans, maxdepth(mp[-1][i]));
    }

    cout<<ans<<endl;
    return 0;
}