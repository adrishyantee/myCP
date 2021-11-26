#include <bits/stdc++.h>
using namespace std;


int main(){
    long long t; cin>>t;
    while(t--){
       long long n,m;
        cin>>n>>m;

        long long z=n-m;

        if(z<=m+1)
        cout<<z<<endl;
        else{
            long long vl = z/(m+1);
            long long rem =(z)%(m+1);
            long long cnty=m+1-rem;
            long long sum =(cnty* vl * (vl+1) /2) + ( rem* (vl+1)*(vl+2)/2 );
            cout<<sum<<endl;
        }
    }


    return 0;
}