#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
        int n,a,b,c; cin>>n>>a>>b>>c;
        int maxi=0,count=0;
        for(int i=0;i<=n;i++){
            if(a*i<=n){
            for(int j=0;j<=n;j++){
                if(b*j<=n && (a*i+b*j)<=n && (n-(a*i+b*j))%c==0){
                count=i+j+((n-(a*i+b*j))/c);
                maxi=max(maxi,count);
                }
            }
            }
        }   
        cout<<maxi<<endl;
    return 0;
}