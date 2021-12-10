#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int pos = n-1;
        int count=0;
        while(pos>=1 && arr[pos-1]>=arr[pos])
        {
           pos--;
        }
        while(pos>=1 && arr[pos-1]<=arr[pos])
        {
           pos--;
        }
        cout<<pos<<endl;
    }
    return 0;
}