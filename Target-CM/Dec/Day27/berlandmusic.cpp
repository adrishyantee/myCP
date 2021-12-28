#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s; cin>>s;
        int zero=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            zero++;
        }
        map<int,int> mp;
        if(zero!=0)
        {
            for(int i=0;i<n;i++){
                if(s[i]=='0' && v[i]<=zero)
                mp[v[i]]++;
                else if(s[i]=='1' && v[i]>zero)
                mp[v[i]]++;
            }

            vector<int> z,o;
            for(int i=1;i<=zero;i++){
                if(mp.find(i)==mp.end())
                z.push_back(i);
            }
             for(int i=zero+1;i<=n;i++){
                if(mp.find(i)==mp.end())
                o.push_back(i);
            }

            int m=0,n=0;

            // for(int i =0;i<z.size();i++)
            // cout<<z[i]<<endl;

            for(int a=0;a<v.size();a++){
                if(s[a]=='1' && v[a] <= zero){
                   v[a]=o[m];
                   m++;
                }
                else if(s[a]=='0' && v[a] > zero){
                    v[a]=z[n];
                    n++;
                }
            }
        }

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}