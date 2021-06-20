#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int N;
        string S;
        cin>>S;
        int t1s,t0s;
        for(auto i:S){
            if(i=='1')
            t1s++;
            else
            t0s++;
        }
        if(t1s==1)
        cout<<0<<endl;
        else 
        cout<<(t1s%t0s)<<endl;
    }
    return 0;
}