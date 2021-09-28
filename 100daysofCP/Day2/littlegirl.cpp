#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

ll cnt[30];
int main()
{
    ll m,n,t,i,j,k,x=0,ans,odd=0;
    string s;
    cin>>s;

    for(i=0; i<s.length(); i++) cnt[s[i]-'a']++;

    for(i=0; i<26; i++)
    {
    
        if(cnt[i]&1)  odd++;
    }

    if( (odd==0) || (odd&1)) cout<<"First"<<endl;
    else cout<<"Second"<<endl;

    return 0;
}