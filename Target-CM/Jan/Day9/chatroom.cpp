#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0; 
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}

int main(){

    string s;
    cin>>s;
    string s1="hello";

    if(isSubSequence(s1,s,s1.size(),s.size()))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}