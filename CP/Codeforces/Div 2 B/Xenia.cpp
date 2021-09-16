#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n, m;
    cin>>n>>m;
    long long dist = 0;
    long long int arr[m];
    cin>>arr[0];
    dist=arr[0]-1;
    long long int pp = arr[0];
    for(long long int i=1;i<m;i++){
        cin>>arr[i];
        if(arr[i]>pp)
        {
            dist+=arr[i]-pp;
            pp=arr[i];
        }
        else if(arr[i]<pp){
           dist+=n-pp+arr[i];
            pp=arr[i];
        }
    }
    cout<<dist<<endl;
    return 0;
}