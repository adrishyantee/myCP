#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int x,n;
        cin>>n>>x;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=1;
        if(n>=2*x){
        cout<<"YES"<<endl;
        }
        else if(n==x){
            vector<int> temp=arr;
            sort(temp.begin(), temp.end());
            for(int i=0;i<n;i++){
            if(temp[i]!=arr[i]){
            ans=0;
            break;
            }
        }
        cout<<((ans==1)?"YES":"NO")<<endl;
        }
        else{
        vector<int> temp=arr;
        sort(temp.begin(), temp.begin()+x);
        sort(temp.end()-x, temp.end());
        for(int i=0;i<n;i++){
            if(temp[i]!=arr[i]){
            ans=0;
            break;
            }
        }
        cout<<((ans==1)?"YES":"NO")<<endl;
        }
    }
    return 0;
}