#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        ll n;cin>>n;
        int c=1;
        int a,b;
        if(n%2==0){
            n=n-2;
            a=n/2;
            b=a+1;
        }
        else{
            n=n-1;
            n=n/2;
            if(n%2==0){
                a=n+1;
                b=n-1;
            }
            else{
                a=n+2;
                b=n-2;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}

