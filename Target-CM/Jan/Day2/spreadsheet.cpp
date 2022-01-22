#include <bits/stdc++.h>
using namespace std;
#define ll long long

string convertToTitle(int columnNumber) {
        string ans="";
         while(columnNumber > 0){
            if(columnNumber % 26 == 0){
                ans = 'Z' + ans;
                columnNumber = columnNumber/26 - 1;
            }
            else{
                ans = (char)(columnNumber % 26 - 1 + 'A') +ans;
                columnNumber = columnNumber/26;
            }
        }
        return ans;
    }

int titleToNumber(string columnTitle) {
        int res=0;
        for(int i=0;i<columnTitle.size();i++){
            res = (res* 26) + (int)(columnTitle[i]-'A'+1);
        }
        return res;
        
    }

int main(){
    ll t; cin>>t;
    while(t--){
        string s; 
        cin>>s;

        vector<string> v1,v2;
        ll i=0;

        while(i<s.size()){
            string s1="", s2="";
            while(s[i]>='A' && s[i]<='Z'){
            s1+=s[i];
            i++;
            }
            while(s[i]>='0' && s[i]<='9'){
            s2+=s[i];
            i++;
            }
            v1.push_back(s1);
            v2.push_back(s2);
        }

        if(v1.size()==1){
            cout<<"R"<<stoi(v2[0])<<"C"<<titleToNumber(v1[0])<<endl;
        }
        else{
            cout<<convertToTitle(stoi(v2[1]))<<stoi(v2[0])<<endl;
        }
    }
    return 0;
}