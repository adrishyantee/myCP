#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n; cin>>n;
    vector<ll> v(n);

    for(ll i=0;i<n;i++)
    cin>>v[i];

    sort(v.begin(),v.end());

    vector<ll> v1,v2;
    for(ll i=0;i<n;i++)
    {
        if(i%2==0)
        v1.push_back(v[i]);
        else
        v2.push_back(v[i]);

    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int idx1= floor((v1.size()+1)/2.0);
    int idx2= floor((v2.size()+1)/2.0);

    cout<<abs(v1[idx1-1]-v2[idx2-1])<<endl;




}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin>>t;
    while(t--) {
        solution();
    }

    return 0;
}