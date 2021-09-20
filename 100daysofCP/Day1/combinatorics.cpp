#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        long long a,b,c,m; cin>>a>>b>>c>>m;

        long long arr[3]={a,b,c};
        sort(arr,arr+3);

        if((a+b+c)< (m+3))
        cout<<"NO"<<endl;

        else{
           
           long long pairs = arr[2] - (arr[1]+arr[0]+1);
           if(m>=pairs)
               cout<<"YES"<<endl;

           else
               cout<<"NO"<<endl;
           }
        }
           return 0;
}

