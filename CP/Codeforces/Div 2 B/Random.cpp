#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll printNcR(ll n, ll r)
{
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            ll m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
 
    else
        p = 1;
        return p;
}

int main(){

    ll n,m; cin>>n>>m;
    ll maximum =0;
    if(n-m+1 == 1)
    maximum = 0;
    else 
    maximum = printNcR(n-m+1,2);
    ll minimum =0;
    if(n%m == 0)
    {
        ll v = n/m;
        if(v == 1)
        minimum = 0;
    else minimum = m * printNcR(v,2);
    }
    else if(n%m !=0){
        ll v = n/m;
        ll e = n%m;
        ll le = m-e;
        if(v != 1)
        minimum = e*printNcR(v+1,2)+ le*printNcR(v,2);
        else minimum = e*printNcR(v+1,2);
    }

    cout<<minimum<<" "<<maximum<<endl;

    return 0;
}