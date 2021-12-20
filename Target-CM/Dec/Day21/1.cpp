
#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    int t; cin>>t;
    while (t--){
        int n;
        cin>>n;
        unordered_map<int,int> hash;
        for(int i=1;i<=n;i++){
            int x; cin>>x;
            hash[x]++;
        }
        int maxi=0;
        for(int i=1;i<=n;i++)
        maxi=max(maxi,hash[i]);
        cout<<maxi<<endl;
    }
    return 0;
}