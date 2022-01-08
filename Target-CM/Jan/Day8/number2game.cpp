#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check_prime(ll n){
	for(int i = 2; i <=sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main(){
    ll t; cin>>t;
    while(t--){
    ll n;
    cin >> n;
    int ans = (n==1);
    if(n>2 && n%2==0){
        if(ceil(log2(n)) == floor(log2(n))){
            ans = 1;
        }
        else if(n % 4 != 0 && check_prime(n / 2))
				ans = 1;
    }
    cout<<((ans==0)?"Ashishgup":"FastestFinger")<<endl;
    }

    return 0;
}