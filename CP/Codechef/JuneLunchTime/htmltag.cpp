#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        string s;
        cin>>s;

    
        if(s[0]=='<' && s[1]=='/' && s[s.size()-1]=='>')
        {
            if(s.size()==3){
            cout<<"Error"<<endl;
            continue;
            }
            int c=0;
            for(int i=2;i<s.size()-1;i++){
                if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')){
                c++;
                }
            }
        
            if(c==s.size()-3) cout<<"Success"<<endl;
            else cout<<"Error"<<endl;
        }
        else
        cout<<"Error"<<endl;
    }
    return 0;
}