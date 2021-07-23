#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    
    while(t--){
    string s; cin>>s;

    if(s.size()==0 || s.size() == 1){
    cout<<0<<endl;
    continue;
    }

    unordered_map<char,int> mp;

    for(int i =0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end())
        mp[s[i]]++;
        else
        mp.insert({s[i],1});
    }

    if(mp.size()==1){
    cout<<1<<endl;
    continue;
    }
    else{
        int temp=0,sol=0;
        for(auto i:mp){
            if(i.second==1)
            temp++;
            else if(i.second>=2)
            sol++;
        }
        sol+= floor(temp/2);
        cout<<sol<<endl;
    }
    }
    return 0;
    }