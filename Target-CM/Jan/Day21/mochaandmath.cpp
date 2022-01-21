#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solution() {
    ll i, j, k, n, m;

    cin>>n;
    vector<ll> arr(n);
    cin>>arr[0];
    ll ans=arr[0];
    for(i=1;i<n;i++){
    cin>>arr[i];
    ans&=arr[i];
    }
    cout<<ans<<endl;

}

/* ========== YOUR CODE HERE ========= */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin>>t;
    while(t--) {
        solution();
    }

    return 0;
}