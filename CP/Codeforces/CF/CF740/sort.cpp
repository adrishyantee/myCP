#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> b=a;
        sort(b.begin(),b.end());

        int i=0; 
        while(i>=0 && a!=b){
            int j=0;
            if((i)%2!=0)
            j=1;

            while(j<n-1){
                if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
                j+=2;
            }
            i++;           
        }
        cout<<i<<endl;
    }
    return 0;

}