#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        deque<int> res;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n==1){
        cout<<1<<endl;
        continue;
        }

        int i=0,j=n-1;
        int flag=0;

         int first =arr[i];
         int last = arr[j];
         if(first!=n&&last!=n){
         cout<<-1<<endl;
         continue;
         }
        while(i<=j){
            int first =arr[i];
            int last = arr[j];
            
            if(first > last){
               res.push_front(arr[i]);
               i++;
            }
            else {
               res.push_back(arr[j]);
               j--;
            }

        }
        if(flag==1)
        cout<<-1;
        else{
        for(auto i: res)
        cout<<i<<" ";
        }

       cout<<endl;
    }
    return 0;
}