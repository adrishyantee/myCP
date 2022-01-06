#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n,m;
    cin>>n>>m;
    int count =0;
    while(n!=m){
       if(n>m)
       m++;
       else if(m%2==0)
       m=m/2; 
       else
       m++;
       count++;
    }
    cout<<count<<endl;


    return 0;
}