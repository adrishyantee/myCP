// #include <bits/stdc++.h>
// using namespace std;
// int kthNonDivisible(int N, int K)
// {
//     return K + floor((K - 1) / (N - 1));
// }
// int main()
// {
//     int t; cin>>t;
//     while(t--){
//     int n,k;
//     cin>>n>>k;
//     cout<<kthNonDivisible(n,k)<<endl;
//     }
//     return 0;
// }


#include <iostream>
 
using namespace std;
 
int main()
{
    int t; cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    if(k>=n){
    int i=k/(n-1);
    int rem = k%(n-1);
    if(rem==0)
    cout<<(n*(i-1))+(n-1)<<endl;
    else
    cout<<(n*i)+k%(n-1)<<endl;
    }
    else
    cout<<k<<endl;
    }
    return 0;
}

