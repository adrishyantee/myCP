#include <bits/stdc++.h>
using namespace std;

int main(){

    int k[1001];
    int n=1;
    k[0]=0;
    for(int i = 1;i<=1000;i++){
        if(n%3==0 || n%10 == 3)
        i--;
        else
        k[i]=n;

        n++;
    }
    int t;cin>>t;
    while(t--){
        int j; cin>>j;
        cout<<k[j]<<endl;
    }

    return 0;


}