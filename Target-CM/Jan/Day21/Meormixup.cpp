#include <bits/stdc++.h>
using namespace std;
#define ll long long 

vector<ll> arr(3e5+2);



int main(){

    arr[0]=0;

    for(ll i=1;i<3e5+2;i++){
        arr[i]=arr[i-1]^i;
    }

    ll t; cin>> t;
    while (t--)
    {
        ll a,b; cin>>a>>b;

        ll ans =a;

        if(arr[a-1]==b)
        {
            cout<<a<<endl;
        }
        else if((arr[a-1]^b)!=a){
            cout<<a+1<<endl;
        }
        else{
            cout<<a+2<<endl;
        }
    }
    return 0;

}