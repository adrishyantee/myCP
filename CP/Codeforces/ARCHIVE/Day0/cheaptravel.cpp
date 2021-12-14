#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,m,a,b;
    cin>>n>>m>>a>>b;
    double p1= m/b;
    double p2 = 1/a;
    int sum=0;
    if(p1>p2){
    int r = (int)n %(int)m;
    int q = (int)n /(int)m;
    if(q==0 && b<n*a)
    sum=b;
    else if(q==0 && n*a<b)
    sum=n*a;
    else if(r*a>=b && q>0)
    sum = q*b + b;
    else if(r*a<b && q>0)
    sum = q*b +  r*a;
    }
    else
    sum=n*a;
    cout<<sum<<endl;
    return 0;
}