#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin>>t;
    while(t--){

        ll x; cin>>x;
        for(int i=0;i<20;i++){
			if (x%11==0){
				cout<<"YES"<<endl;
				goto done;
			}
			
			x-=111;
			if (x<0)
             break;
		}
		cout<<"NO"<<endl;
		
		done:;
    }
    return 0;
}