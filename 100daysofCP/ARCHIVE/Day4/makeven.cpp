#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
       

        if(n%2==0)
        cout<<0<<endl;

        else if(n%2!=0){
            int flag=0;

            int nums=n;
              while (nums >= 10)
              nums /= 10;

              if(nums%2==0){
                  cout<<1<<endl;
                  flag=1; 
              }
              else{
     
              while(n>0){
                int d=n%10;
                n/=10;
                if(d%2==0){
                cout<<2<<endl;
                flag=1;
                break;
                }
              }
             }

            if(flag==0)
            cout<<-1<<endl;
        }
    }
    return 0;
}