#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//not yet finished
int main(){
    map<string,ll> mp;
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        mp[s]++;
        if(mp[s]>1)
        {
            cout<<s<<mp[s]-1<<endl;
        }
        else
        cout<<"OK"<<endl;
        
    }
    return 0;
}