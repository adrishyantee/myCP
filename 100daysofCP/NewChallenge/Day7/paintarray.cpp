#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];

       ll d=0;
       ll gcd1 = a[0];
       ll gcd2 = a[1];

       for(int i=2;i<n;i+=2){
           gcd1=gcd(gcd1,a[i]);
       }
        for(int i=3;i<n;i+=2){
           gcd2=gcd(gcd2,a[i]);
       }
       int chk =-1;


       if(gcd1!=1){
           d=gcd1;
           chk=1;
           while(chk<n){
               if(a[chk]%gcd1==0){
                   d=0;
                   break;
               }
               chk+=2;
           }
       }

        if(gcd2 != 1 && d==0){
               d=gcd2;
               chk=0;
               while(chk<n){
                   if(a[chk]%gcd2==0){
                       d==0;
                       break;
                   }
                   
                   chk+=2;
               }
           }
            
           cout<<d<<endl;
       }

    //     ll ch=2;
    //     ll maxi = *max_element(a.begin(),a.end());

    //     while(ch<=maxi){
    //     if(a[0]%ch==0 && a[1]%ch!=0){
    //     int flag=0;
    //     for(int i=0;i<n;i+=2){
    //         if(a[i]%ch!=0){
    //         flag=1;
    //         break;
    //         }
    //     }
    //     if(flag==0){
    //     for(int i=1;i<n;i+=2){
    //         if(a[i]%ch==0)
    //         flag=1;
    //     }  
    //     }
    //     if(flag==0)
    //     break;
    //     }
    //     else if(a[1]%ch==0 && a[0]%ch!=0){
    //         int flag=0;
    //     for(int i=0;i<n;i+=2){
    //         if(a[i]%ch==0){
    //         flag=1;
    //         break;
    //         }
    //     }
    //     if(flag==0){
    //     for(int i=1;i<n;i+=2){
    //         if(a[i]%ch!=0)
    //         flag=1;
    //     }  
    //     }
    //     if(flag==0)
    //     break;   
    //     }
    //     ch++;
    //     }
    //     if(ch>maxi)
    //     cout<<0<<endl;
    //     else
    //     cout<<ch<<endl;
    // }
    return 0;
}