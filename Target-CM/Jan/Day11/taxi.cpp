#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
 
 
int main(){
     ll n; cin>>n;
     vector<ll> st(n);

     map<ll,ll> mp;
     for(ll i=0;i<n;i++){
        cin>>st[i];
        mp[st[i]]++;
    }

    ll taxireq=0;

    taxireq+=mp[4];
    mp[4]=0;
    // no fours left;
    //make pairs of 3 and 1

    if(mp[1]>=1 || mp[3]>=1){
    if(mp[1]>mp[3]){
        taxireq+=mp[3];
        mp[1]=mp[1]-mp[3];
        mp[3]=0;

    }
    else if(mp[1]<mp[3]){
        taxireq+=mp[1];
        mp[3]=mp[3]-mp[1];
        mp[1]=0;
        taxireq+=mp[3];
        mp[3]=0;
    }
    else{
        taxireq+=mp[3];
        mp[3]=0;
        mp[1]=0;
    }
    }

    //3 and 1 pairs are made
    //now make 2 and 2 pairs
    //left will be only 1s and 2s

    taxireq+=(mp[2]/2);
    mp[2]=(mp[2]%2);

    //now we will have only one 2 or zero and some ones

//   cout<<taxireq<<endl;

    if(mp[2]==1){
        if(mp[1]==0){
        taxireq++;
        mp[2]=0;
        }
        else if(mp[1]>2){
            taxireq++;
            mp[1]-=2;
            mp[2]=0;
        }
        else if(mp[1]==1){
            taxireq++;
            mp[1]=0;
            mp[2]=0;
        }
    }

    if(mp[1]>=1){
        taxireq+=(mp[1]%4==0)?(mp[1]/4):((mp[1]/4)+1);
        mp[1]=0;
    } 
    cout<<taxireq<<endl;

 return 0;
}
