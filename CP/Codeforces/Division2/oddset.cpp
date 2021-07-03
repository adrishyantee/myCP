#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int countodd=0,counteven=0;
        int n;cin>>n;
        for(int i=0;i<2*n;i++){
        int b;
        cin>>b;
        if(b%2==0)
        counteven++;
        else
        countodd++;

        }
        if(counteven==countodd)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}