#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M =  1000000007;


int power(long long x, unsigned long long int y, long long int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(){

	ll t; cin>>t;
	while(t--){
		ll a,b; cin>>a>>b;

		ll ans=0;

	for (ll i = 0; i< 32; i++) {
        ll k =  b >> i;
        if (k & 1){
			ll val = ((ll)power(a,i, M));
			ans += (val % M);
		}               
    }

	cout<<(ans%M)<<endl;
	}
	return 0;
}