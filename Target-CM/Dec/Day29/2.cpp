#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
string lexicosmall(string s, string r){
    if(r<=s)
    return r;
    else
    return s;
}
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        string s; cin>>s;
        string rev="";
        string ans="";
        string f="";
        string store="aaaaaaaa";
        ll i=0;
        for(;i<n;i++){
            ans+=s[i];
            rev = s[i]+rev;
            f = ans+rev;

            store = lexicosmall(store,f);
        }  
        cout<<store<<endl;      
    }
    return 0;
}