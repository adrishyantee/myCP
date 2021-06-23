#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    cin>>n>>s;
    int c=0;
    char res = s[0];
    for(int i=1;i<n;i++){

        if(s[i]==res)
        c++;
        else
        res=s[i];
    }
    cout<<c<<endl;
    return 0;
}