#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,s,t; 
    cin>>n>>s>>t;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int op=0;
    while(s!=t){
        s=v[s-1];
        op++;
        if(op>n){
        cout<<-1<<endl;
        return 0;
        }

    }
    cout<<op<<endl;

    return 0;
}

