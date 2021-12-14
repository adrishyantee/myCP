#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    sort(a.begin(), a.end());
    int p=(n-1)/2;
    int p1=p-1,p2=p+1;
    cout<<a[p]<<" ";
    while(p1>=0 && p2<n){
        cout<<a[p2]<<" "<<a[p1]<<" ";
        p2++;
        p1--;
    }
    if(p2==n-1)
    cout<<a[p2]<<" ";
    cout<<endl;
    }

    return 0;
}

