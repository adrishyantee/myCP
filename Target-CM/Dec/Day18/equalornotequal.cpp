#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;

        int count =0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='N')
            count++;
        }
        if(count == 1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}