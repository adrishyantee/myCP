#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0, revsum=0;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
int count=0;
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--){
        revsum=revsum + arr[i];
        sum=sum - arr[i];
        count++;
        if(revsum>sum)
        break;
       
    }
    cout<<count<<endl;
    return 0;
}