#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){

    int a, b,c; 
    cin>>a>>b>>c;

    if(a!=b && b!=c && a!=c){
        if(a>b && a>c){
            if(a==(b+c))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        if(b>a && b>c){
            if(b==(a+c))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl; 
        }
        if(c>a && c>b){
            if(c==(a+b))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl; 
        }

    }
    else if(a==b || b==c || a==c){
        if(a==b && c%2==0){
            cout<<"YES"<<endl;
        }
        else if(b==c && a%2==0){
            cout<<"YES"<<endl;
        }
        else if(a==c && b%2==0){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
      }
    }

    return 0;
}