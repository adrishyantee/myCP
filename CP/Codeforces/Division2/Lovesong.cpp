#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q;
    cin>>n>>q;

    string s;
    cin>>s;
    
    while(q--){
        int l,r;
        cin>>l>>r;
        map<char,int> mp;
    for(int i=0;i<r;i++){
        if(mp.find(s[i])!=mp.end())
        mp[s[i]]++;
        else
        mp.insert({s[i],1});
    }
    int sum=0,i=1;

    for(auto a:mp){
        sum+= a.second*((int)(a.first-'a')+1);
        i++;
    }
    cout<<sum<<endl;
    }
    return 0;
}