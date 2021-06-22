#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n,q;
    cin>>n>>q;
 
    string s;
    cin>>s;
    

    vector<int> num(n+1);
    num[0]=0;

    for(int i=1;i<=n;i++){
        int val =((int)(s[i-1]-'a')+1);
        num[i]=num[i-1]+val;
    }

    while(q--){
        int l,r;
        cin>>l>>r;
    //     unordered_map<char,int> mp;
    // for(int i=l-1;i<r;i++){
    //     if(mp.find(s[i])!=mp.end())
    //     mp[s[i]]++;
    //     else
    //     mp.insert({s[i],1});
    // }
    // int sum=0;
 
    // for(auto a:mp){
    //     int p=(int)(a.first-'a')+1;
    //     sum+= a.second*p;
    // }
    // cout<<sum<<endl;
    // }

    cout<<num[r]-num[l-1]<<endl;
    }
    return 0;
}