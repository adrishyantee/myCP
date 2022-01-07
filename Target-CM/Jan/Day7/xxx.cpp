#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<int> a(n);
        multiset<int> mp;
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%x==0)
            mp.insert(a[i]);
        }
        if(mp.size()==n)
        cout<<-1<<endl;
        else if(sum%x!=0)
        cout<<n<<endl;
        else{
            int i=0,j=0;
            for(i=0;i<n;i++){
                if(a[i]%x!=0){
                break;
                }
            }
            for(j=n-1;j>=0;j--){
                if(a[j]%x!=0){
                break;
                }
            }
            cout<<max(n-i-1,n-(n-j))<<endl;
        }
        
        // ll i=0,j=0;
        // ll sum=0, maxi=0,smoothsum=0;
        // for(int i=0;i<n;i++){
        // j=0;
        // smoothsum+=a[i];
        // sum=smoothsum;
        // while(j<=i && (sum%x==0)){
        //     sum-=a[j];
        //     j++;
        // }
        // maxi=max(maxi,i-j+1);
        // }
        // if(maxi==0)
        // maxi=-1;
        // cout<<maxi<<endl;
    }
    return 0;
}