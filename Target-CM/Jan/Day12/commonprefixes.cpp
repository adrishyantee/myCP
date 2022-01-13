#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
 
 
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> pref(n);
        for(ll &x:pref){
            cin>>x;
        }

        string s="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

        cout<<s<<endl;
        for(ll i=0;i<n;i++){
            if(s[pref[i]]!='z')
            s[pref[i]]=(char)(s[pref[i]]+1);
            else
            s[pref[i]]='a';
            cout<<s<<endl;
        }
    }

 return 0;
}
