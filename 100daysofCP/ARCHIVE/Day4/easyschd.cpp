#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int h,p;
        cin>>h>>p;
        cout<<(h+(pow(2,h-1)-(pow(2,h+1)-1)/p))<<endl;
        return 0;
    }
}