#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int n; cin>>n;
    int m; cin>>m;
    unordered_map<string,string> mp;
    for(int i=0;i<m;i++){
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size()>s2.size()){
            mp.insert({s1,s2});
            mp.insert({s2,s2});
        }
        else{
            mp.insert({s1,s1});
            mp.insert({s2,s1});
        }
    }
    for(int i=0;i<n;i++){
        string s3; cin>>s3;
        cout<<mp[s3]<<" ";
    }
    return 0;
}

