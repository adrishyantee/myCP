#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t; cin>>t;
    while(t--){

    string s;
    cin>>s;

    map<char,ll> mp;
    mp['a']++, mp['e']++,  mp['o']++, mp['i']++,  mp['u']++;

    ll countstart =0,countend=0;

    ll i=0;

    while(mp[s[i]]!=0 && i<s.size()){
        countstart++;
        i++;
    } 

    ll start=i;
    i=s.size()-1;

    while(mp[s[i]]!=0 && i>=0){
        countend++;
        i--;
    } 
    
    ll end=i;
    ll maxcount=INT_MIN;

    if(start<=end){
    for(ll j=start;j<=end;j++){
        ll midcount=0;
        while(mp[s[j]]!=0){
            midcount++;
            j++;
        }
        maxcount=max(midcount,maxcount);
    }
    }
    if(start<=end)
    cout<<maxcount+countstart+countend<<endl;
    else
    cout<<countstart<<endl;
    }
    return 0;
}