#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;

    vector<int> a(7);
    for(int i=0;i<7;i++)
    cin>>a[i];

    int sum=0,i=0,c=0;

    while(sum<n){

        sum+=a[i];
            c++;
        
        if(sum>=n)
        break;

    

        if(i==6)
        i=0;
        else
         i++;
    }
    if(c%7==0) cout<<7<<endl;
    else cout<<c%7<<endl;
    return 0;
}