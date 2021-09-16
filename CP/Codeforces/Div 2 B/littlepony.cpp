#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ll n; cin>>n;
    vector<ll> a(n);
    cin>>a[0];
    ll p=0;

    for(ll i = 1; i<n; i++){
        cin>>a[i];
        if(a[i]<a[i-1]){
            p = i;
        }
    }
    vector<ll> a1 = a;
    sort(a1.begin(), a1.end());
    rotate (a.begin(), a.begin()+p, a.end());
      
    if(p==0)
    cout<<0<<endl;
    else if(a1 == a)
    cout<<n-p<<endl;
    else
    cout<<-1<<endl;

    return 0;

}