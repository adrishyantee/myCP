#include <bits/stdc++.h>
#define int long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    
    for(int i=0;i<t;i++){
        int n,m; cin>>n>>m;

        vector<unordered_map<char,int>>mp(m);
        
        for(int j=0;j<n;j++){
            string x;
            cin>>x;

            for(int k=0;k<m;k++){
                if(mp[j].find(x[k])!=mp[j].end())
                mp[k][x[k]] = mp[k][x[k]]+1;
                else
                  mp[j].insert(make_pair(k,x[k]));
            }
        }
        for(int k=0;k<n-1;k++){
            string x;
            cin>>x;
            for(int j=0;j<m;j++){
                mp[j][x[j]] = mp[j][x[j]]-1;
            }
        }
        string s="";
        for(int k =0;k<m;k++){
            for(auto &p: mp[k]){
                if(p.second>0)
                s+=p.first;
            }
        }
        cout<<s<<endl;
        cout<<flush;
    }
}
