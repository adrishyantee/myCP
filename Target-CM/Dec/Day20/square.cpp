#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int flag=0;
        if(s.size()%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[i+s.size()/2]){
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        }
        if(flag!=1)
        cout<<"YES"<<endl;

    }

    return 0;
}