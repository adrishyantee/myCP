#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll t; cin>>t;
    while(t--){
        ll n;cin>>n;
        ll ans;
        if(n<=6)
        ans=15;
        else{
        if(n%2!=0) n++;
        ans=(n*5)/2;

        }

        cout<<ans<<endl;
    }





    return 0;
}