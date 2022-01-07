#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int p=0;
        for (int m=2;m<=100000;m++) {
            if (n % m == 0) {
                p = m;
                break;
            }
        }
        if (p == 0) {
            p = n;
        }
        cout<<n/p<<" "<<n-(n/p)<<endl;

        // if(n%2==0)
        // cout<<n/2<<" "<<n/2<<endl;
        // else{
        // for(ll i=(ll)(n/2)+1;i<=n;i++){
        //     if(i%(n-i)==0){
        //     cout<<n-i<<" "<<i<<endl;
        //     break;
        //     }
        // }
        // }
    }
    return 0;
}