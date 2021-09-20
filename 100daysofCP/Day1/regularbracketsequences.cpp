#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        for(int i = 0;i<n;i++){
            for(int k = 0;k<i;k++){
                cout<<"(";
            }
            for(int k2 = 0;k2<n-i;k2++){
                cout<<"()";
            }
            for(int k = 0;k<i;k++){
                cout<<")";
            }
            cout<<endl;
        }
    }

    return 0;
}