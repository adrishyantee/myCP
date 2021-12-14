#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    string x1,x2; int p1,p2;
    cin>>x1>>p1>>x2>>p2;
   
    if(x1.size()+p1>x2.size()+p2)
     cout<<">"<<endl;
    else if(x1.size()+p1<x2.size()+p2)
     cout<<"<"<<endl;
     else{
    for(ll i=x1.size();i<max(x1.size(),x2.size());i++)
    x1+='0';
    for(ll i=x2.size();i<max(x1.size(),x2.size());i++)
    x2+='0';
    if(x1==x2)
    cout<<"="<<endl;
    else if(x1<x2)
    cout<<"<"<<endl;
    else
    cout<<">"<<endl;
     }
    }
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll tc = 1;
cin >> tc;
for (ll t = 1; t <= tc; t++) {
// cout << "Case #" << t << ": ";
solve();
}
}