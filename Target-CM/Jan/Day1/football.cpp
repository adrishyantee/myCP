#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
  string s;
  cin>>s;
  int ans=0,ansz=0;
  int f=0;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='1')
      {
          ans++;
          if(ans>=7){
              f=1;
          break;
          }
          ansz=0;
      }
    else
      {
          ansz++;
          if(ansz>=7){
              f=1;
          break;
          }
          ans=0;
      }
  }
  if(f==1)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

    return 0;
}
