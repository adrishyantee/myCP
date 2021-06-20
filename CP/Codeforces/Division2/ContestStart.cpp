#include "bits/stdc++.h"
using namespace std;


int main(){

    int k;
    cin>>k;
    while(k--){
    long long n,x,t;
    long long sum=0;
    cin>>n>>x>>t;

    if(x>t){
    cout<<0<<endl;
    continue;
    }

    sum=(n*(n-1))/2;
    for(long long i=0;i<n*x;i+=x){
        
        long long rem = ((n-1)*x)%(i+t);
        long long q=((n-1)*x)/(i+t);

        if(q==0)
        break;

        if(q>1 || (q==1 && rem!=0))
        sum=sum-q;
    }
    cout<<sum<<endl;
    }
    return 0;

}

