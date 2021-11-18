#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void permute(string a, int l, int r,vector<string> &ans)
{
    if (l == r)
        ans.push_back(a);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l+1, r, ans);
            swap(a[l], a[i]);
        }
    }
}

int main(){
    int t; cin>>t;
    for(int i = 1;i<=t;i++){
        int flag =0;
        string s; cin>>s;


        vector<string> ans;
        permute(s,0,s.size()-1,ans);


        string pa;
        for(int k = 0;k<ans.size();k++){
            pa = ans[k];
            int len =0;

            for(int m = 0; m<s.size();m++){
                if(pa[m]!=s[m])
                len++;
                if(pa[m]==s[m])
                break;
            }

            if(len ==s.size())
            {
                flag =1;
                break;
            }
        }
        if(flag==1)
        cout<<"Case #"<<i<<": "<<pa<<endl;
        else
        cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}