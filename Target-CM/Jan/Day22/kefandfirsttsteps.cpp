#include <bits/stdc++.h>
using namespace std;
#define ll long long
int lenOfLongIncSubArr(vector<ll>arr, ll n)
{
    ll max = 1, len = 1;
    for (ll i=1; i<n; i++)
    {
        if (arr[i] >= arr[i-1])
            len++;
        else
        {
            if (max < len)   
                max = len;  
            len = 1;   
        }   
    }
    if (max < len)
        max = len;
    return max;
}
    int main(){
        ll n; cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<lenOfLongIncSubArr(v,n)<<endl;
        return 0;
    }

