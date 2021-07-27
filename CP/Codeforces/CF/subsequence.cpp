#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>> t;
    while(t--){
        int n; cin>>n;

        string str; cin>>str;
        string s = str;

        sort(str.begin(), str.end());
         
        int count=0;
        for(int i = 0;i<n;i++)
        if(s[i]!=str[i])
        count++;

        cout<<count<<endl;
    }



    return 0;
}