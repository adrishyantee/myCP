#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;
    while(t--){

        ll a,b,n,m;
        int flag=0;
        cin>>a>>b>>n>>m;
        if(a>=b && b<m){
            flag=1;
        }
        else if(a<=b && a<m){
            flag=1;
        }
        else if(a+b<n+m)
        flag=1;

        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    
    }
}