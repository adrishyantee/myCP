#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t; cin>>t;
    while(t--){
    int x,y,n;
    cin>>x>>y>>n;

    if(x%n==0 && y%n==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  
    }
    return 0;
}