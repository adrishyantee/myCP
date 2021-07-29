#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t; cin>>t;

    while(t--){

        ll n,m; cin>>n>>m;

        if(m<n)
        cout<<0<<endl;
        else{  
            ll k=min(n^(n-1),n^(n+1)); 
            ll end = max(n^(n-1),n^(n+1));     
        while(k<end){
            if((n^k)>m){
            cout<<k<<endl;
            break;
            }
            k++;
        }
    }
    }
    return 0;

}