#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> ans;
        int mini=INT_MAX;
        for(int start = 1;start<=50;start++){
            for(int d=1;d<=49;d++){
                vector<int> arr(n);
                int flag=0;
                int max=0;
                for(int i=0;i<n;i++){
                    arr[i]=start+i*d;
                    if(arr[i]==x)
                    flag++;
                    if(arr[i]==y)
                    flag++;

                    if(max<=arr[i])
                    max=arr[i];
                }
                if(flag==2 && mini>=max){
                mini=max;
                ans=arr;
                }
            }
        }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;    
    }
    return 0;
}