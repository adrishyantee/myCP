#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<long long> nums = arr;

    sort(nums.begin(),nums.end());

    int start=0,end=0;
    
    for(int i=0;i<n;i++){
        if(nums[i]!=arr[i]){
        start=i;
        break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(nums[i]!=arr[i]){
        end=i;
        break;
        }
    }

    reverse(arr.begin()+start, arr.begin()+end+1);
    if(arr==nums){
    cout<<"yes"<<endl;
    cout<<start+1<<" "<<end+1<<endl;
    }
    else
    cout<<"no"<<endl;

    return 0;
}