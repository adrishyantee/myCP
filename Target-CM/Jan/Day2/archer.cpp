#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    long double a,b, c,d;
    cin>>a>>b>>c>>d;
    long double p = a/b;
    long double q = (1-a/b)*(1-c/d);// if none of them wins its a failure and it will definitely contribute to the probabilty
    cout<<setprecision(12);
    cout<<p/(1-q)<<endl;
    
    return 0;

}