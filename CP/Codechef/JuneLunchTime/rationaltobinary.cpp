#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        
        long long a,b; cin>>a>>b;    
        while(b%2==0)
        b/=2;
        if(b==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;


    }
    return 0;
}
