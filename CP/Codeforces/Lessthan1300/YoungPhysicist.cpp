#include <bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin>>n;
    int sumx=0,sumy=0,sumz=0;
     for (int i=0;i<n;i++){
         int x[n],y[n],z[n];
         cin>>x[i]>>y[i]>>z[i];
         sumx+=x[i];
         sumy+=y[i];
         sumz+=z[i];
     }

     if(sumx==0 && sumy==0 && sumz == 0)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
    return 0;
}