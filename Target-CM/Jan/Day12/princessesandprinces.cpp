
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
 
 
int main(){

    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<bool> used (n,false);
        ll v=-1;
        for(ll i=0;i<n;i++){
            ll num; cin>>num;
            vector<ll> l(num);
            for(ll j=0;j<num;j++){
                cin>>l[j];
                l[j]=l[j]-1;
            }

            ll g=0;
            for(int j=0;j<num;j++){
                if(!used[l[j]])
                {
                    used[l[j]]=true;
                    g=1;
                    break;
                }
               if(g==1)
               break;
            }
            if(g==0)
                v=i;
        }
        if(v==-1)
        cout<<"OPTIMAL"<<endl;
        else{
            ll u;
            for(int i=0;i<n;i++)
            {
                if(!used[i]){
                u=i;
                break;
            }
            }
        cout<<"IMPROVE"<<endl;
        cout<<v+1<<" "<<u+1<<endl;
        }
    }
    return 0;
}