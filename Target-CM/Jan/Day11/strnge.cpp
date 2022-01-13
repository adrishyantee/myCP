#include <bits/stdc++.h>
using namespace std;
#define ll long long 
using namespace std;


int main(){
    ll t; cin>>t;
    while(t--){
   int n,m;
cin>>n>>m;
vector<ll>k(n);
vector<ll>c(m);
for(int i=0;i<n;i++)
cin>>k[i];
for(int i=0;i<m;i++)
 cin>>c[i];
sort(k.begin(),k.end(),greater<>());//desc
ll total=0;
int j=0;
for(int i=0;i<n;i++){
    if(j<m){
    if(c[j]<c[k[i]-1]){
    total+=c[j];
    j++;
    }
    else{
        total+=c[k[i]-1];
    }
    }
    else{
    total+=c[k[i]-1];
    }
    }
    cout<<total<<"\n";
    }
    return 0;
}