#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll sq =floor(sqrt(n));
        ll cu = floor(cbrt(n));
        ll sixth = floor(cbrt(sqrt(n)));
        cout<<sq+cu-sixth<<endl;
    }
    return 0;
}