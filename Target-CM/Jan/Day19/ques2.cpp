#include <bits/stdc++.h>
#define ll long long 
using namespace std;


void solve(vector<int> &answ){
    for(int i=0;i<17;i++){
        for(int j=i+1;j<18;j++){
            for(int k=j+1;k<19;k++){
                for(int l=k+1;l<20;l++){
                int ans =(1<<l)+(1<<k)+(1<<j)+(1<<i);
                    answ.push_back(ans);
                }
                if(answ.size()==1000)
                break;
            }
            if(answ.size()==1000)
                break;
        }
        if(answ.size()==1000)
                break;
    }
    return ;
}

int main(){
    vector<int> answ;
    solve(answ);
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        for(ll i=0;i<n;i++){
            cout<<answ[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}