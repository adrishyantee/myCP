#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t ; cin>>t;

    while(t--) {
        int n; cin >>n;
        vector<long long int> a(n);
      
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector <long long int> aa = a;

        vector<long long int> nsetbits(32);

        for(int i =0;i<32;i++){
            nsetbits[i]=0;

            for(long long int &j : a){
                if(j%2 !=0)
                nsetbits[i]++;

                j/=2;
            }
            
        }

       long long int ans = 0;

       long long int term = 1;
       for(int i=0;i<32;i++){
           if(nsetbits[i] >= n - nsetbits[i]){
               ans+=term;
           }
           term*=2;
       }

       long long int arror =0;
       for(long long int j:aa){
           arror |=(j^ans);
       }

       cout<<ans<<" "<<arror<<endl;
    }

    return 0;
}