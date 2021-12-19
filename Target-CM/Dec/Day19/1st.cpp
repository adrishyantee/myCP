#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n; cin>>n;
    ll count=0;
    n=n-1;
    for(ll i=1;i*i<n;i++){
    if(n%i==0)
    count+=2;
    }
    if(pow((ll)sqrt(n),2)==n)
    count+=1;
    cout<<count<<endl;

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