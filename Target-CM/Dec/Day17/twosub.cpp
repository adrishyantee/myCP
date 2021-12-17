#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s,s1;
        cin>>s;
        s1=s;
        sort(s.begin(),s.end());
        cout<<s[0]<<" ";
        int count=0;
        for(int i=0;i<s1.size();i++){
        if(s1[i]==s[0] && count==0)
        {
        count++;
        continue;
        }
        else
        cout<<s1[i];
        }
        cout<<endl;
    }
    return 0;
}