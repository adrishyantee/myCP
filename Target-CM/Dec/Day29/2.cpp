#include <bits/stdc++.h>
using namespace std;
#define ll long long 


bool lexicosmall(string s, string r){
    return (r<=s);
}
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        string s; cin>>s;
        string rev="";
        string ans="";
        string f="";
        ll i=0;
        for(;i<n;i++){
            ans+=s[i];
            rev = s[i]+rev;
            f = ans+rev;
            if(i==n-1)
            break;
            else if(lexicosmall(s,f))
            {
                cout<<f<<endl;
                break;
            }
        }  
        if(i==n-1)
        cout<<f<<endl;      
    }
    return 0;
}