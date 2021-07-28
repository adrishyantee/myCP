#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
    if (!a)
       return b;
    return gcd(b%a,a);
}

int main(){

    ll t; cin>>t;

    while(t--){
        ll x, y;
        cin>>x>>y;


        if(gcd(x,y)!=1)
        cout<<0<<endl;
        
        else{
            int sol =0;

            if(gcd(x+1,y)>1 || gcd(x,y+1)>1)
            sol = 1;

            else
            sol=2;

        cout<<sol<<endl;
        }
    }

    return 0;
}