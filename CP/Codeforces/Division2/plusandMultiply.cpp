#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
      

        if(n==1){
            cout<<"Yes"<<endl;
            continue;
        }

        if(a==1){
            if((n-1)%b==0)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
             continue;
        }
       long long s=1; int flag=0;
       while(s<=n){
           if((n-s)%b==0){
               flag=1;
               break;
           }
           s*=a;
       }
       if(flag){
           cout<<"Yes"<<endl;
       }
       else
       cout<<"No"<<endl;
    }

    return 0;
}