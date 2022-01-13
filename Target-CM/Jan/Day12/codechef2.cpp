#include <bits/stdc++.h>
#define ll long long 
using namespace std;
bool areAllBitsSet(int n)
{
    // all bits are not set
    if (n == 0)
        return false;

    // if true, then all bits are set
    if (((n + 1) & n) == 0)
        return true;

    // else all bits are not set
    return false;
}

int main(){

    ll test; cin>>test;
    while(test--){
        ll n,andi; cin>>n>>andi;
        if(n==1)
        cout<<((andi%2==0)?"Even":"Odd")<<endl;
        else{
            if(andi%2==1){
                cout<<(((n)%2==0)?"Even":"Odd")<<endl;
            }
            else{
                cout<<"Impossible"<<endl;
            }
        }
        
    }
    return 0;
}