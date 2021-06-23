#include <bits/stdc++.h>
using namespace std;


bool isPrime(int x){

    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
        return false;
    }
    return true;
}
int main(){

    int a = 0;
    int n,m;
    cin>>n>>m;
    int i=n+1;
    while(i>n){
        if(isPrime(i))
        break;

        i+=1;
    }
    if(i==m)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}