#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t; cin>>t;
    for(int i = 1;i <= t;i++){
      
        string str; cin>>str;
        string s = str;

        int flag =0;

        sort(str.begin(), str.end());
        do {
            int len = 0;
            for(int m = 0; m< s.size();m++){
                if(s[m]!= str[m])
                len++;
                if(s[m]==str[m])
                break;
            }

            if(len == str.size())
            {
                flag = 1;
                break;
            }
        }while (next_permutation(str.begin(), str.end()));

        if(flag==1)
        cout<<"Case #"<<i<<": "<<str<<endl;
        else
        cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}