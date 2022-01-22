#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ll t; cin>>t;
        while(t--){
            ll n; cin>>n;

            ll sum=1;
            ll i=1;

            while(true){
            sum+=pow(2,i);
                if(n%sum==0){
                    cout<<n/sum<<endl;
                    break;
                }
            i++;
            }
        }
        return 0;
    }

