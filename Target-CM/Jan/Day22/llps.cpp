#include <bits/stdc++.h>
using namespace std;
#define ll long long


string largestPalinSub(string s)
{
    string res;
 
    char mx = s[0];
    for (int i = 1; i < s.length(); i++)
        mx = max(mx, s[i]);
    for (int i = 0; i < s.length(); i++)
        if (s[i] == mx)
            res += s[i];
 
    return res;
}

int main(){

string s; cin>>s;
cout<<largestPalinSub(s)<<endl;
return 0;
}