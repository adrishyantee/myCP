#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        int flag =0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }

        if(a[0]<b[0]){
        flag=1;
        cout<<"NO"<<endl;
        }

        if(flag==0){
        for(ll i=1;i<n;i++){
            if(a[i]<a[i-1] || a[i]<b[i] || b[i]<b[i-1] || (a[i]==a[i-1] && (b[i]!=b[i-1])) || ((a[i]-a[i-1]) < (b[i]-b[i-1])))
            {
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
            if(flag==1)
            break;
        }
        if(flag==0)
        cout<<"YES"<<endl;
        }
    }
    return 0;
}