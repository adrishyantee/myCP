#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){

        int xa,ya,xb,yb,xf,yf;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;

        int dist= abs(xb-xa) + abs(yb-ya);

        if(xa==xb || ya==yb){
            if((xf==xa && yf>min(ya,yb) && yf<max(ya,yb) )|| (yf==yb)&& xf>min(xa,xb) && xf<max(xa,xb))
            dist+=2;
        }
        cout<<dist<<endl;
    }
return 0;
}