#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s;
        cin>>s;
        vector<int> pos;
        int count=0;

        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            count++;
            else
            pos.push_back(i);
        }
        if(k==0)
        cout<<count<<endl;
        else if(count==n){
            int ans=0;
            for(int i=0;i<n;i+=k+1)
            ans++;
            cout<<ans<<endl;
        }
        else{
            int ans = 0;
            int zeros = 0;
            
            for(int i=0;i<pos.size()-1;i++){
                zeros=(pos[i+1]-(k+1))-(pos[i]+(k+1))+1;
                for(int i=0;i<zeros;i+=k+1)
                ans++;
            }

            if(pos[0]!=0)
            {
                zeros=pos[0]-k;
                for(int i=0;i<zeros;i+=k+1)
                ans++;
            }
            if(pos[pos.size()-1]!=n-1)
            {
                zeros=n-pos[pos.size()-1]-1-k;
                // cout<<zeros<<endl;
                for(int i=0;i<zeros;i+=k+1)
                ans++;
            }
            cout<<ans<<endl;
        }
    
    }
    return 0;
}


