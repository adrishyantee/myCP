#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s; 
    int i=0;
    string st="";

    while(i<s.size()){
        s[i]=tolower(s[i]);
        if(s[i]!='a' && s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'&& s[i]!='y'){
        st=st+'.'+s[i];
        i++;
        }
        else
        i++;
    }
    cout<<st<<endl;
    return 0;
}