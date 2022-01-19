#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    ll t; cin>>t;
    while(t--){
        
        ll n; cin>>n;
        string a,b;
        cin>>a>>b;

        ll z1=0,z2=0;

        
        string res="";

        for(ll i=0;i<n;i++){
            if(a[i]=='0')
            z1++;
            if(b[i]=='0')
            z2++;
        }


        ll i=0,j=0;

        while(i<n && j<n){
            if(a[i]=='0' && b[j]=='0'){
                res+='0';
                z1--;
                i++;
            }
            else if(a[i]=='1' && b[j]=='1'){
                if(z1>z2){
                res+='1';
                i++;
                }
                else
                {
                res+='1';
                j++;
                }
            }
            else if(a[i]=='1' && b[j]=='0'){
                res+='0';
                z2--;
                j++;
            }
            else if(a[i]=='0' && b[j]=='1'){
                res+='0';
                z1--;
                i++;
            }
        }
        while(i!=n){
            res+=a[i];
            i++;
        }
        while(j!=n){
            res+=b[j];
            j++;
        }
        cout<<res<<endl;
        ll z=0,inv=0;

        for(ll k=(2*n)-1;k>=0;k--){
            if(res[k]=='1')
            inv+=z;
            else
            z++;
        }
        cout<<inv<<endl;
    }
    return 0;
}