#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    unordered_map <char,int> mp;
    int c3=0;

    for(int i=0;i<s3.size();i++){
        if(mp.find(s3[i])!=mp.end())
            mp[s3[i]]++;
        
        else
            mp.insert({s3[i],1});

        c3++;
    }

    int c1=0,c2=0;
    for(int i=0;i<s1.size();i++){
        if(mp.find(s1[i])!=mp.end() && mp[s1[i]]>0){
        mp[s1[i]]--;
        c1++;
        }
    }

    for(int i=0;i<s2.size();i++){
        if(mp.find(s2[i])!=mp.end() && mp[s2[i]]>0){
        mp[s2[i]]--;
        c2++;
        }
    }

    if(c1==s1.size() && c2==s2.size() && c1+c2==c3)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}