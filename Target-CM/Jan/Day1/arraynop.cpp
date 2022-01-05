#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        int sum =0;
        for(int i=0;i<(n-2*k);i++){
            sum+=a[i];
        }
        for(int i=n-2*k;i<n-k;i++){
            sum+=(a[i]/a[i+k]);
        }
        cout<<sum<<endl;
    }



    return 0;
}
 