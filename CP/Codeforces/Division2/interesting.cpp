#include <bits/stdc++.h>
using namespace std;


int main(){

    int t; cin>>t;

    while(t--){
    long long int n;
    cin>>n;
    if(n<9){
        cout<<0<<endl;
    }
    else if(n%10 == 9){
        n=n/10;
        cout<<n+1<<endl;
    
    }
    else{
        n=n/10;
        cout<<n<<endl;
        
    }
    }
    return 0;

}