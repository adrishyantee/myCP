#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;

ll lcm(ll a,ll b, ll c){
    return (a*((b*c)/__gcd(b,c)))/(__gcd(a,(b*c)/__gcd(b,c)));

}

int main(){

    ll t; cin>>t;
    while(t--){

    ll n,k1;
    cin>>n>>k1;
        if (n % 2!=0) //odd
        cout << 1 << ' ' << n / 2 << ' ' << n / 2 << endl;
        else if (n % 2 == 0 && n % 4!=0)// a number which when divided by two gives odd
        cout << 2 << ' ' << n / 2 - 1 << ' ' << n / 2  - 1 << endl;
        else 
        cout << n / 2 << ' ' << n / 4 << ' ' << n / 4 << endl;
        // if gives even result then print its half first and its halves again
    }
    return 0;
}