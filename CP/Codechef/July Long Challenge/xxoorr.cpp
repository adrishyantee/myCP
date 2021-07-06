#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        long long  n,k; cin>>n>>k;
        vector<int> a(32);
        long long ans=0;
        for(long long i=0;i<n;i++){
            long long x; cin>>x;
            for(long long i=0; x>0; i++)    
            {    
            a[i]+=x%2;    
            x= x/2;  
            } 
        }

        for(int i=0;i<32;i++){
            
            ans+=ceil(a[i]/(float)(k));
            
        }
        cout<<ans<<endl;
    }


    return 0;
}