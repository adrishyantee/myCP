#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool getPath(string s, int i, int n,int reach, int dest, int &t){
   if(i==n){
       if(dest == reach){
       t++;
       return true;
       }
       else
       return false;
   }
   if(s[i]=='+'){
       return getPath(s,i+1,n,reach+1,dest,t);
   }
   else if(s[i]=='-'){
       return getPath(s,i+1,n,reach-1,dest,t);
   }
   else{
       bool ans = getPath(s,i+1,n,reach-1,dest,t);
       bool ans1 =  getPath(s,i+1,n,reach+1,dest,t);
       if(ans || ans1)
       return true;
   }
   return false;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int dest = 0;
    int q = 0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')
        dest++;
        else
        dest--;
        if(s2[i]=='?')
        q++;
    }
    int t=0;
    int n=s2.size();
    if(getPath(s2, 0, n, 0, dest, t)){
    long double total = pow(2,q);
    long double ans = (long double)t/total;
    std::cout << std::fixed;
    std::cout << std::setprecision(12);
    cout<<ans<<endl;
    }
    else
    cout<<0.000000000000<<endl;
    return 0;
}