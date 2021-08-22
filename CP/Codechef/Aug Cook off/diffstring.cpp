#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n)
{
  string ans = "";
  while(n>0){
      if(n&1){
          ans+='1';
      }
      else {
          ans+='0';
      }
      n/=2;
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
   int t;cin>>t;
    while(t--){

        int n;cin>>n;
        string s;
        unordered_map <string,int> mp;
        
        for(int i =0;i<n;i++){
            cin>>s;
            int j =0;
            while(j<n && s[j]=='0'){
                j++;
            }
            if(j==n)
            continue;

           
            mp[s.substr(j,n-j)]++;
        }

        string ans="";
       
       for(int i=1;i<=105;i++){
           string st = decimalToBinary(i);
           if(mp[st]==0){
               ans=st;
               break;
           }
       }
       for(int i =0;i<n-(int)ans.size();i++)
       cout<<0;
       cout<<ans<<endl;
    }
    return 0;
}

