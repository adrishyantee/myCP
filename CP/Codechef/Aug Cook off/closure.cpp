#include<bits/stdc++.h>
using namespace std;


bool check(vector<long long> &a, int n, long long val)
{
    for(int i=0;i<n;i++)
    {
        if (a[i] == val)
        {
            return true;
        }
    }
    return false;
}
int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     vector<long long> a(n);
     for(int i=0;i<n;i++)
         cin>>a[i];

     sort(a.begin(),a.end());


     if(n==1)
     {
         cout<<1<<"\n";
         continue;
     }
     
     bool p = check(a, n, a[0]*a[1]);
     if(p == false)
     {
         cout<<0<<"\n";
         continue;
     }
     bool q = check(a, n, a[n-1]*a[n-2]);
     if(q == false)
     {
         cout<<0<<"\n";
         continue;
     }
     bool r = check(a, n, a[0]*a[n-1]);
     if(r == false)
     {
         cout<<0<<"\n";
     } 
     else 
     {
         cout<<1<<"\n";
     }
     
     
 }
 return 0;
}