#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        string a; cin>>a;

        vector<int> arr;
        for(int i=0;i<a.size();i++){
            int d = (int)(a[i]-'0');
            arr.push_back(d);
        }
        int f = arr[0];
        if(f==1){
            cout<<arr[0];
            cout<<0;
            for(int i=1;i<a.size();i++){
            cout<<arr[i];
        }
        }
        else{
            cout<<1;
            for(int i=0;i<a.size();i++){
                cout<<arr[i];
            }
        }
       cout<<endl; 
    }
    return 0;
}