#include <bits/stdc++.h>
using namespace std;

int main(){
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int zeros=0,ones=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            break;
            zeros++;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            break;
            ones++;
        }
        if(ones+zeros==n)
        cout<<s<<endl;
        else{
            string ans ="";
            for(int i=0;i<zeros;i++)
            ans+= '0';
            ans+='0';
            for(int i=0;i<ones;i++)
            ans+= '1';

            cout<<ans<<endl;
        }
      
    }

    return 0;
}