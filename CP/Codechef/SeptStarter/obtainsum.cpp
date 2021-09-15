#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n+1];
        arr[0]=0;
        for(int i =1;i<=n;i++){
            arr[i]=arr[i-1]+i;
        }
        int flag =0;
        for(int i =1;i<=n;i++){
            if(arr[i-1]+(arr[n]-arr[i])==s){
            cout<<i<<endl;
            flag=1;
            break;
            }
        }
        if(flag != 1)
        cout<<-1<<endl;        
        
    }
    return 0;
}