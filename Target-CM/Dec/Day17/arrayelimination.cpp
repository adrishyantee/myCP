#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
string decToBinary(ll n)
{
 return bitset<30>(n).to_string();
}

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<string> res(n);
        vector<ll> counts(30);
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            res[i]=decToBinary(x);
        }
        ll count=0;
        for(int k=0;k<30;k++){
        for(int i=0;i<n;i++){
            if(res[i][k]=='1')
            count++;
        } 
            counts[k]=count;
        }
        ll g=0;
        for (int i = 0; i < 30; i++)
        g = gcd(g, counts[i]);
        for (int i = 1; i <= n; i++)
        {
            if (g % i == 0)
                cout<<i<< ' ';
        }
        cout << endl;
    }
    return 0;
}