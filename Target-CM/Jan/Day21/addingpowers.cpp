#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long int

int main(){

	ll t; cin>>t;
	while(t--){
        ll n,k;
        cin>>n>>k;

        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            ll x; cin>>x;
            arr[i]=x;
        }

        ll size =(ll) log(1e18)/log(k);
        // cout<<size<<endl;

        vector<bool> matrix(size,false);

        ll flag=0;

        for(ll j=0;j<n;j++){
            ll b=arr[j];
            if(b==0)
            continue;
            for (ll i = size; i>=0; i--){
                if(b<k && b>1){
                    flag=1;
                    break;
                }
                ll val =(ll)pow(k,i);
                if(b>=val){
                    if(matrix[i]==false){
                        matrix[i]=true;
                    } 
                    else if(matrix[i]==true){
                        flag=1;
                        break;
                        }
                    b=b-val;
                    if(b>=val){
                        flag=1;
                        break;
                    }
                }       
            }
            if(flag==1)
            break;                 
        }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
	return 0;
}

// 10
// 5 2
// 281475010331664 1161226012856512 211106249326858 4525933457317920 2263897394382852