#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    ll countodd=0, counteven=0;
    pair<ll,ll> lastodd, lasteven;
    for(ll i=0;i<n;i++){
        int x; cin>>x;
        if(x%2==0){
        lasteven={x,i+1};
        counteven++;
        }
        else{
        lastodd={x,i+1};
        countodd++;
        }
    }
    if(countodd<counteven)
    cout<<lastodd.second<<endl;
    else
    cout<<lasteven.second<<endl;
    return 0;
}