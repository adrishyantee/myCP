#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t; cin>>t;

    while(t--){

        ll n;
        string e,g;
        cin>>n>>e>>g;

        ll ans =0;


        for(int i =0;i<n;i++){
            if(g[i]=='1'){
                if(e[i]=='0')
                ans++;
            
            else if(i>0 && e[i-1]=='1'){
                ans++;
                e[i-1]='0';

            }

            else if(i<n && e[i+1]=='1'){
              ans++;
              e[i+1]='0';
             }
        }
        }
        cout<<ans<<endl;
    }
       return 0;
    }