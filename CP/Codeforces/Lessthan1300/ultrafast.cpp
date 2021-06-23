#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    char s3[s1.size()];
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i])
        s3[i]='0';
        else
        s3[i]='1';
    }

    for(auto i:s3)
    cout<<i;
    return 0;
}