#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){


int t; cin>>t;
while(t--){
    int n; cin>>n;
    vector<int> arr(n+1,0);

    if(n%2==0){
    for(int i=1;i<=n;i+=2){
    arr[i]=i+1;
    arr[i+1]=i;
    }
    }
    else{
    arr[1]=1;
    for(int i=2;i<=n;i+=2){
    arr[i]=i+1;
    arr[i+1]=i;
    }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}