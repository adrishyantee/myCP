#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
 

 ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    ll base = 1;

    ll len = num.length();
    for (ll i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}


 string decToBinary(int n)
{
    string s="";
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            s+="1";
        else
            s+="0";
    }
    return s;
}
 
int main(){

    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        vector<string> binary(n);
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            binary[i]=decToBinary(x);
        }
        vector<ll> count(32);
        for(ll i=0;i<n;i++){
            string s=binary[i];
            for(ll j=0;j<32;j++){
                if(s[j]=='1')
                count[j]++;
            }
        }
        string s="";
        for(ll i=0;i<32;i++){
            if(count[i]>n-count[i])
            s+='1';
            else
            s+='0';
        }
        cout<<binaryToDecimal(s)<<endl;
    }
    return 0;
}