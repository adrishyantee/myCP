#include <bits/stdc++.h>
using namespace std;
  int main(){


      int t; cin>>t;
      while(t--){
          int n; cin>>n;

          vector<long long int> ar0;
          vector<long long int> ar1;

          for(int i=0;i<n;i++){
              long long int x;
              cin>>x;
              if(x%2==0)
              ar0.push_back(x);
              else
              ar1.push_back(x);
          }


           for(int i=0;i<ar0.size();i++){
               cout<<ar0[i]<< " ";
           }

            for(int i=0;i<ar1.size();i++){
               cout<<ar1[i]<< " ";
           }
          cout<<endl;
      }
return 0;
  }