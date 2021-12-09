#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr (n);
        for(int i=0;i<n;i++)
        cin>>arr[i];

        sort(arr.begin(),arr.end());
        int count=0;
        int sum=0;
        for(int i=0; i<n-1;i++){
            if(arr[i]%2==0)
            {
                sum+=1;
                count+=arr[i]/2;
            }
            else
            sum+=arr[i];
        }
        int val=arr[n-1];
        for(int i=1;i<=count;i++){
            val = val*2;
        }
        sum+=val;
        cout<<sum<<endl;
        
    }



    return 0;
}