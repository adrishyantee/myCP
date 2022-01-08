#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        int n;cin>>n;
        string s; cin>>s;
        string rs="";

        vector<string> a={"","2","3","322","5","53","7","7222","7332"};

        for(int i=0;i<n;i++)
        {
          if(s[i]!='0')
          rs+=a[s[i]-'0'-1];
        }
        
        sort(rs.begin(),rs.end(), greater<char>());
        cout<<rs<<endl;   
    return 0;
}


