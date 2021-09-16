#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){

    ll n,l;
    cin>>n>>l;
    vector<ll> arr(n);
    for(ll i = 0;i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr. end());
    long double maxd =0.0;
    for(ll i =0;i<n-1;i++){
        ll dist = arr[i+1] - arr[i];
        if(dist>maxd)
        maxd=dist;
    }
    maxd= maxd/2.0;
    cout.precision(20);
    if(maxd>max(arr[0],(l-arr[n-1])))
    cout<<maxd<<endl;
    else
    cout<<(long double)(max(arr[0],(l-arr[n-1])));
    return 0;
}