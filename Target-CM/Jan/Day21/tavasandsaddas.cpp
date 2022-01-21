#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

void solution() {
    
    string s; cin>>s;

    for(ll i=0;i<s.size();i++){
        if(s[i]=='4')
        s[i]='0';
        else
        s[i]='1';
    }

    ll ans = binaryToDecimal(s)+1;

    ll digits = s.size();

    ll val=0;

    for(ll i=1;i<digits;i++){
        val = pow(2,i);
        ans+=val;
    }


    cout<<ans<<endl;



    

}

/* ========== YOUR CODE HERE ========= */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    while(t--) {
        solution();
    }

    return 0;
}