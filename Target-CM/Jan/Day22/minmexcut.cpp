#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;

    while(t--){
        string s1; cin>>s1;
        char ch = s1[0];
        string s= "";
        s+=ch;

        for(ll i=0;i<s1.size();i++){
            if(ch!=s1[i]){
            s+=s1[i];
            ch=s1[i];
            }
        }
        ll zeros=0, ones=0;

        for(ll i=0;i<s.size();i++){
            if(s[i]=='1')
            ones++;
            else
            zeros++;
        }

        if(ones==s.size())
        cout<<0<<endl;
        else if(zeros==s.size())
        cout<<1<<endl;
        else{
            cout<<min(2LL,zeros)<<endl;;
        }
    }
    return 0;
}