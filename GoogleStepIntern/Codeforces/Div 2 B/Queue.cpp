#include <bits/stdc++.h>
using namespace std;

int  main(){

    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int j=0;j<t;j++){
    for(int i =0;i<n-1;)
    {
        if(s[i]=='B'&& s[i+1]=='G'){
        s[i+1]='B';
        s[i]='G';
        i+=2;
        }
        else
        i++;
    }
    }
    cout<<s<<endl;

    return 0;
}