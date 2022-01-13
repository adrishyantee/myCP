#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;
bool islucky(ll n){
    int flag=0;
    while(n>0){
        ll d=n%10;
        n=n/10;
        if(d!=4 && d!=7) 
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return false;
    else
    return true;
}

int main(){
    ll n; cin>>n;
    int flag=0;
    for(ll i=1;i<=n;i++){
        if(n%i==0 && islucky(i))
        {
            flag=1;
            break;
        }

    }
    cout<<((flag==1)?"YES":"NO")<<endl;
    
    
    return 0;
}