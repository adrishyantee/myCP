#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll t; cin>>t;
    while(t--){
        vector<ll> a(7);
        for(int i=0;i<7;i++)
        cin>>a[i];

        ll smallest = a[0];
        ll largest = a[6];
        ll sum = largest-smallest;
        int i,j;
        for(i=1;i<6;i++){
            for(j=i+1;j<6;j++){
                if(a[i]+a[j]==sum)
                break;
            }
             if(a[i]+a[j]==sum)
                break;
        }
        cout<<a[0]<<" "<<a[i]<<" "<<a[j]<<endl;
    }
    return 0;
}