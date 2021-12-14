#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){

    int t; cin>>t;
    while(t--){
        ll n, k; cin>>n>>k;
        if(n>=k && n%k==0){
            cout<<"YES"<<endl;
            for(int i=0;i<k;i++)
            cout<<n/k<<" ";
            cout<<endl;
        }
        else{
            if(n<k)
            cout<<"NO"<<endl;
            else{
               ll q = n/k;
               ll rem = n%k;
               //if rem is added and then final ans is same as other elements
               if((q%2==0 && (q+rem)%2==0) || (q%2!=0 && (q+rem)%2!=0) ){
                   cout<<"YES"<<endl;
                   for(int i=0;i<k-1;i++)
                   cout<<q<<" ";
                   cout<<q+rem<<endl;
               }
               else{
                   //when the k-1 terms are even then rearrngmwnt is poss.
                   if((k-1)%2==0 && q-1>0){
                   cout<<"YES"<<endl;
                   for(int i=0;i<(k-1)/2;i++)
                   cout<<q+1<<" "<<q-1<<" ";
                   cout<<q+rem<<endl;
                   }
                   else
                   cout<<"NO"<<endl;
               }

            }

        }
    }
    return 0;
}