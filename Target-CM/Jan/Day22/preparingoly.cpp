#include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<vector<ll>> arr;

void getsubsequences(ll idx, ll l,ll r,vector<ll> v, vector<ll> &temp){
    if(idx==v.size()){
        ll sum=0;
        for(ll i=0;i<temp.size();i++){
            sum+=temp[i];
        }
        if(sum>=l && sum<=r)
        arr.push_back(temp);
        return;
    }
    getsubsequences(idx + 1, l,r,v, temp);
    temp.push_back(v[idx]);
    getsubsequences(idx + 1,l,r,v, temp);
    temp.pop_back();
}

int main(){
        ll n,l,r,x; cin>>n>>l>>r>>x;

        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        vector<ll> temp;
        getsubsequences(0, l,r,v,temp);

        ll cnt=0;
        for(auto i:arr){
            if(i.size()>=2){
            sort(i.begin(),i.end());
            if((i[i.size()-1]-i[0])>=x)
            cnt++;
            }
        }
        cout<<cnt<<endl;
    return 0;
}