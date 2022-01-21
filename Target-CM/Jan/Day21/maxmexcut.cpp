#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
 
    ll t;
	cin >> t;
 
	while (t--) {
 
		ll n;
		cin >> n;

        string a,b;
        cin>>a>>b;
        ll ans=0;

        for(ll i=0;i<n;i++){
            if(a[i]=='1' && b[i]=='1'){

                if(i==n-1){
                break;
                }
                if(a[i+1]=='0' && b[i+1]=='0'){
                ans+=2;
                i++;
                }
              
            }
            else if(a[i]=='0' && b[i]=='0'){
               if(i==n-1){
                ans++;
                break;
                }
                if(a[i+1]=='1' && b[i+1]=='1'){
                ans+=2;
                i++;
                }
                else         
                ans++;
            }
            else
            ans+=2;
        }

        cout<<ans<<endl;
    }
    return 0;
}