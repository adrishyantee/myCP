#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
         vector<int>arr(n);

        int m=INT_MIN;
        long long sum=0;

        for(int i=0;i<n;i++){
             cin>>arr[i];
        }

        int flag =(arr[0]>0)?1:0;
        for(int i=0;i<n;i++){
            int prevflag=flag;
            if(arr[i]>0)
                flag=1;
            else
                flag=0;
           
            if(prevflag==1-flag){
            sum+=m;
            m=INT_MIN;
            }
            if(i==n-1)
            sum+=max(arr[i],m);

            m = max(arr[i],m);
       }
       cout<<sum<<endl;
    }   
    return 0;
}