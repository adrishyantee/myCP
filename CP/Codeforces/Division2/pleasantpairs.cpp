#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(2*n+1,-1);
            
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a[x]=i;
        }

        int c=0;
        for(int i=3;i<2*n;i++){
            for(int j=1;j*j<i;j++){
                if(i%j==0 && j*j!=i && a[j]!=-1 && a[i/j]!=-1 && a[j]+a[i/j]==i)
                c++;
            }
        }
    cout<<c<<endl;
    }
    return 0;
}