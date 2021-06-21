#include "bits/stdc++.h"
using namespace std;

long long int max(long long int a, long long int b){
    if(a>=b)
    return a;
    else
    return b;
}
long long int min(long long int a, long long int b){
    if(a>=b)
    return b;
    else
    return a;
}

int main(){

    int k;
    cin>>k;
    while(k--){
    
    long long int n,x,t;
    cin>>n>>x>>t;
    int m=t/x;
    cout<<(max(0,n-m)*m) + (min(n-1,m-1) * (min(n,m))/2)<<endl;
    }
    return 0;
}

