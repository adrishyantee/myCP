#include <bits/stdc++.h>
using namespace std;


long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        
        int n;cin>>n;
        vector<long long> a(n);
        cin>>a[0];
        long long G=a[0];
        long long max=a[0], idx=0;
		for(int i=1;i<n;i++){
            cin>>a[i];
            G=gcd(G,a[i]);
            if(max<a[i]){
            max=a[i];
            idx=i;
            }
        }        
    long long ans=0;
    a[idx]=G;
    for(int i=0;i<n;i++){
        ans+=a[i]/G;
    }
    cout<<ans<<endl;
    }

    return 0;
}
