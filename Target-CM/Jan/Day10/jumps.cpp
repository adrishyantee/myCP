#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll t; cin>>t;
    while(t--){
        ll x; cin>>x;
        ll sum=0;
        ll time=0;

        while(sum<x){
            time++;
            sum+=time;
        }

        if(sum-x==1)
        cout<<time+1<<endl;
        else
        cout<<time<<endl;  
    }



    return 0;
}