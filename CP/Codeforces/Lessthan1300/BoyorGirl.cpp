#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    unordered_map <char,int> mp;

    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end())
            mp[s[i]]++;
        else
            mp.insert({s[i],1});
    }
    if(mp.size()%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;



    return 0;
}