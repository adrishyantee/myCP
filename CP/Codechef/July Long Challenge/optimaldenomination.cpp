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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        long long G=a[0], G1=0,G2=0;
        long long max=a[0], idx=0, s=0;

		for(int i=1;i<n;i++){
            G=gcd(G,a[i]);

            if(G==1){
                c++;
            }

            if(c==1 && G==1){
                G1=gcd(a[i-1],a[i+1]);
                G2=gcd(a[i],a[i+1]);
                if(G1>G2){
                    G=G1;
                    s=i;
                }
                else{
                    G=G2;
                    s=i-1;
                }
            }
            if(max<a[i]){
            max=a[i];
            idx=i;
            }
        }  


    long long ans=0;
    if(c!=1)
    a[idx]=G;
    else{
        a[s]=G;
    }

    for(int i=0;i<n;i++){
        ans+=a[i]/G;
    }
    cout<<ans<<endl;
    }

    return 0;
}
