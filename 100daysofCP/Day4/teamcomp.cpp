#include <bits/stdc++.h>
using namespace std;

long long min(long long a, long long b){
    if(a<b)
    return a;
    else 
    return b;
}
int main(){

    int t; cin>>t;
    while(t--){
        long long a,b; cin>>a>>b;
        long long team=0;

        // if(a >= (b*3))
        // cout<<b<<endl;
    

        // else{
        // if(a>=2 && b>=2){
        // team = min(a,b)/2LL;
        // if(a>=b){
        //   a-=(2*(b/2LL));
        //   b%=2;
        // }
        // else if(b>a){
        //      b-=(2*(a/2LL));
        //      a%=2;
        // }
        // }

        // if(a>=1 || b>=1){
        //     if(a>=3 && b==1)
        //     team++;
        //     if(a==1 && b>=3)
        //     team++;
        // }
        team = min((a+b)/4,min(a,b));
        cout<<team<<endl;

    }
    return 0;
}
        