#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){

    int t; cin>>t;
    while(t--){
    ll n; cin>>n;
    int flag =0, flag1=0;
    ll i=2;
    for(;i*i<=n;i++){
        if(n%i==0){
            n/=i;
            flag=1;
            break;
        }
    }
    ll j=2;
    for(;j*j<=n;j++){
        if(n%j==0 && i!=j){
            n/=j;
            flag1=1;
            break;
        }
    }
    if(n==1 || i==n || j==n || i==j || flag1==0 || flag ==0)
    cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<i<<" "<<j<<" "<<n<<endl;
        
    }
    }
    return 0;
}