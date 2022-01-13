#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){

    ll a,b,c; cin>>a>>b>>c;
    ll n; cin>>n;
    vector<ll> usb,ps;
   

    for(ll i = 0 ; i < n ; i++){
        ll x;cin>>x;
        string s; cin>>s;
        if(s[0]=='P')
        ps.push_back(x);
        else
        usb.push_back(x);
    }

    // ps and usb will have all the values


    sort(ps.begin(),ps.end());
    sort(usb.begin(),usb.end());






    ll cost=0;
    ll i=0,j=0;
    ll cnt=0;
    for(i=0;i<ps.size()&& i<b;i++){
        cost+=ps[i];
        cnt++;
    }
    for(j=0;j<usb.size()&& j<a;j++){
        cost+=usb[j];
        cnt++;
    }

if(c!=0){
    if(i==ps.size()){
        if(j!=usb.size()){
            for(ll k=j;k<usb.size();k++){
                cost+=usb[k];
                cnt++;
                c--;
                if(c==0)
                break;
            }
        }
    }
    else if(j==usb.size()){
        if(i!=ps.size()){
            for(ll k=i;k<ps.size();k++){
                cost+=ps[k];
                c--;
                cnt++;
                if(c==0)
                break;
            }
        }
    }
    else{
        if(i<ps.size() && j<usb.size())
        {
           while((i<ps.size() || j<usb.size()) && c>0){
               if(i<ps.size() && j<usb.size()){
                    if(ps[i]>=usb[j] ){
                        cost+=usb[j];
                        cnt++;
                        j++;
                    }
                    else if(ps[i]<usb[j]){
                        cost+=ps[i];
                        i++;
                        cnt++;
                    }
               }
               else if(i<ps.size()){
                   cost+=ps[i];
                   i++;
                   cnt++;
               }
               else if(j<usb.size()){
                  cost+=usb[j];
                   cnt++;
                   j++;
               }
               c--;
           }

        }
    }
}

    cout<<cnt<<" "<<cost<<endl;
    return 0;
}