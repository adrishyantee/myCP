#include <bits/stdc++.h>
using namespace std;


int main(){


    int T;
    cin>>T;
    while(T--){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,bool>mp;
    
    for(int i=1;i<=15;i++)
    mp[i]=false;
    
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i=0,k=0;
    
    for(;i<n;i++){
    mp[arr[i]]=true;
    if(mp[1]==true && mp[2]==true && mp[3]==true && mp[4]==true && mp[5]==true && mp[6]==true && mp[7]==true){
    k=i;
    break;
    }
    }
    cout<<k+1<<endl;
    }
    return 0;
}