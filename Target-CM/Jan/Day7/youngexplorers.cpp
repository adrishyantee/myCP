#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];

        sort(a.begin(), a.end());
        int g=0, ans=0;
        int i=0;
        while(i<n){
            int val = a[i];
            g++;
            while(g!=val && i<n){
            i++;
            g++;
            if(i==n)
            break;
            val=a[i];
            }
            if(i==n)
            break;
            g=0;
            ans++;
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}