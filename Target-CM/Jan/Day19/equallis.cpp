#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    ll t; cin>>t;
    while(t--){
        
        ll n; cin>>n;
        if(n==1)
        {
            cout<<"YES"<<endl;
            cout<<1<<endl;
            continue;
        }
        if(n==2){
          cout<<"NO"<<endl;  
          continue;
        }
        if(n%2!=0){
            cout<<"YES"<<endl;
            for(ll i=1;i<=(n/2);i++)
            cout<<i<<" ";

            cout<<n<<" ";

            for(ll i=n-1;i>(n/2);i--)
            cout<<i<<" ";
            cout<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        cout<<(n/2)<<" ";
        for(ll i=1;i<(n/2);i++)
        cout<<i<<" ";
        for(ll i=n;i>(n/2);i--){
        cout<<i<<" ";
        }
        cout<<endl;

    }
    return 0;
}