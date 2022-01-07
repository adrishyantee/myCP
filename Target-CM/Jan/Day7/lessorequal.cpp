#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);

        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a.begin(),a.end());
        int ans=0;
        if(x==0)
        ans=a[0]-1;
        else
        ans = a[x-1];
        int cnt =0;

        for(int i=0;i<n;i++){
            if(a[i]<=ans)
            cnt++;
        }

        if(cnt==x && ans>=1)
        cout<<ans<<endl;
        else
        cout<<-1<<endl;
    return 0;
}