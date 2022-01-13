#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll n,k2,x; cin>>n>>k2>>x;

    vector<ll> color(n);

    for(ll i=0;i<n;i++){
        cin>>color[i];
    }

    ll j=0,k=0;
    ll cnt=0;
    ll i=0;

    while(i<n){

        if(i!=n-1 && color[i]==x && color[i+1]==x){
            
            
            j=i-1;
            while(color[i]==x){
                cnt++;
                i++;
            }
            k=i;


            while(j>=0 && k<n && color[j]==color[k] ){
                ll inj=j, ink=k;

                while(j-1>=0 && color[j]==color[j-1])
                    j--;
                

                while(k+1<n && color[k]==color[k+1])
                    k++;
                

                if(color[j]==color[k] && (k-ink+inj-j+2)>=3){
                    cnt+=(k-ink+inj-j+2);
                    j--;
                    k++;
                }
                else
                break;
            }
            i=k;
            i++;
        }
    }

    cout<<cnt<<endl;
    return 0;
    
}