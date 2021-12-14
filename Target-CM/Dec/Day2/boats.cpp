#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> w(n);
        map<int,int> mp,temp;
        for(int i=0;i<n;i++){
        cin>>w[i];
        temp[w[i]]++;
        }

        //s -2, s-100
        int res=INT_MIN;
        for(int s=2;s<=100;s++){
            int count=0;
            mp=temp;
            for(int i=0;i<n;i++){
                
                if(mp[w[i]]>0){
                mp[w[i]]--;
                if(mp.find(s-w[i])!=mp.end() && mp[s-w[i]]>0)
                {
                    count++;
                    mp[s-w[i]]--;
                }
                else 
                mp[w[i]]++;
                }
            }
            res=max(count,res);
        }
        cout<<res<<endl;
    }




    return 0;
}