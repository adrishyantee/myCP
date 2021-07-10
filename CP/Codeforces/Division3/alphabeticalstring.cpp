#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    
    while(t--){
        string s; cin>>s;
        int n=s.size();
        int flag=0;

        vector<int> a(n,0);
        for(int i=0;i<n;i++){
            if((int)(s[i]-'a')<n)
            a[(int)(s[i]-'a')]++;
        }
        for(int i=0;i<n;i++){
            if(a[i]!=1){
            flag=1;
            break;
            }
        }

        if(flag==1){
        flag=0;
        cout<<"NO"<<endl;
        continue;
        }

        size_t posa=s.find('a');
        for(size_t i=1;i<=posa;i++){
            if(s[i]>s[i-1]){
            flag=1;
            break;
            }
        }
        for(size_t i=posa+1;i<=n-1;i++){
            if(s[i]<s[i-1]){
            flag=1;
            break;
            }
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}