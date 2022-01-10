#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool check(double a){
    return (floor(a)==ceil(a));
}

int main(){

    ll t; cin>>t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;

        if(a+c==2*b){
        cout<<"YES"<<endl;
        continue;
        }
        if((2*b-c)%a==0 && (2*b-c)>0){
        cout<<"YES"<<endl;
        continue;
        }
        if((2*b-a)%c==0 && (2*b-a)>0){
        cout<<"YES"<<endl;
        continue;
        }
        else if((a+c)%(2*b)==0){
        cout<<"YES"<<endl;
        continue;
        } 
        cout<<"NO"<<endl; 
    }
    return 0;
}