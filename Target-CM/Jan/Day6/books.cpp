#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
     int n, t; cin>>n>>t;

     vector<int> a(n);
     for(int i=0;i<n;i++)
     cin>>a[i];

     int maxi=0;
     int sum=0, count=0;
     int i=0;

     for(int j=0;j<n;j++){
     while(i<n && sum+a[i]<=t){
         sum+=a[i];
         i++;
    }
    maxi=max(i-j,maxi);
    sum-=a[j];
     }
     cout<<maxi<<endl;
    return 0;
}