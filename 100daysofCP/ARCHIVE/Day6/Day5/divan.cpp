#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end());
    int start=0;
    while(start<n){
        if(arr[start]>=l)
        break;

        start++;
    }

    int sum=0,count=0;
    for(int i=start;i<n;i++){
        if(arr[i]<=r && sum+arr[i]<=k){
        sum+=arr[i];
        count++;
        }
        if(arr[i]>r)
        break; 
        if(sum>=k)
        break;
        else if(sum+arr[i]>k)
        break;
       
    }
    cout<<count<<endl;
    }
    return 0;
}