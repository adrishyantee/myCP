#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> mp;

int maxdepth(string key){



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
    string a, b, c;
    cin >> a >> b >> c;
    transform(c.begin(), c.end(), c.begin(), ::tolower);
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    mp[c].push_back(a);
    }

    // for(auto m:mp){
    //     cout<<m.first<<" ----- ";
    //     for(auto v:m.second){
    //         cout<<v<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<maxdepth("polycarp")<<endl;

    return 0;

}