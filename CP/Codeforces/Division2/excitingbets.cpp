#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        long long a,b; cin>>a>>b;
        long long count=0;

        if(a==b){
        cout<<"0 0"<<endl;
        
        }
        else if(abs(a-b)==1){
            cout<<"1 0"<<endl;
        
        }
        else{
            long long minx=min(a,b), d = abs(a-b);

            if(minx%d==0)
            count=0;
            else
            count=min(d-minx%d,minx%d);
            cout<<d<<" "<<count<<endl;
        }
    }   

        
    return 0;
}