#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
    long long n;
    cin>>n;
    vector<pair<long long,long long>> arr(n);
    for(long long i=0;i<n;i++){
        int x; cin>>x;
        arr[i].first=x;
        arr[i].second=i;
    }
    sort(arr.begin(), arr.end());
    vector<long long> res(n+1);
    res[0]=0;
    long long time=0;
  
    long long i=0;
    if(n%2!=0){
    time+= (2*(n+1)/2)*arr[0].first;
    i++;
    res[arr[0].second+1]=(n+1)/2;
    }
    long long val = n/2;
    for(;i<n, val>0 ;i+=2){
        time+=val*2*arr[i].first;
        time+=val*2*arr[i+1].first;
        res[arr[i].second+1]=val;
        res[arr[i+1].second+1]=-1*val;
        val--;
    }
    cout<<time<<endl;
    for(int i=0;i<n+1;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}