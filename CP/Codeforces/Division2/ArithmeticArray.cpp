#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum-n>=0)
        cout<<sum-n<<endl;
        else
        cout<<1<<endl;
    }
    return 0;

}