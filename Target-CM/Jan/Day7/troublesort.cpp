#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(auto &k:a)
        cin>>k;
        int z=0,o=0;
        for(auto &k:b){
        cin>>k;
        if(k==0)
        z++;
        else
        o++;
        }
        if(z>=1 && o>=1)
        cout<<"Yes"<<endl;
        else{
            int flag =0;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                flag=1;
                cout<<"No"<<endl;
                 break;
                }
            }
            if(flag==0)
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}