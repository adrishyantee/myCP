#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

     for(int q = 1; q <= t; q++){
      
         string st;

         int n,m; cin>>n>>m;
      
        unordered_map<int,int> hset;
        for(int k = 0; k < m; k++){
            cin>>st;
         
            int a,b,c;
            cin>>a>>b>>c;
         
            hset[b]++;
         }
      
         int middle = -1;
         for(int k = 1; k <= n; k++){
            if(!hset.count(k)){
               middle = k;
               break;
            }
         }
      
         for(int k = 1; k <= n; k++){
            if(k == middle) 
               continue;
            cout<<k<<" "<<middle;
         }
      
      }
   
    return 0;
}