#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string> a(n-2);
        vector<char> res;

        
        for(int i=0;i<n-2;i++){
            cin>>a[i];
        }

        if(n==3)
        {
            cout<<'b'<<a[0]<<endl;
            continue;
        }

        char prev = a[0][1];
        res.push_back(a[0][0]);

        for(int i=1;i<n-2;i++){
            if(a[i][0]==prev){
            res.push_back(a[i][0]);
            prev = a[i][1];

            }
            else{
            res.push_back(prev);
            res.push_back(a[i][0]);
            prev=a[i][1];
            }
        }
        res.push_back(a[n-3][1]);
        if(res.size()!=n){
            if(res[n-2]=='a')
            res.push_back('b');
            else
            res.push_back('a');
        }
        for(auto i:res)
        cout<<i;
        cout<<endl;
        }
        return 0;
    }