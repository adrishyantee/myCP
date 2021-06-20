#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    long long int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);

    for(int i=0;i<q;i++){
        long long int x; cin>>x;
        int pos=0;
       long long int neg=(lower_bound(arr,arr+n,x))-arr;
        if(arr[neg]==x && pos<n)
        cout<<"0"<<endl;
        else if(neg%2==0)
        cout<<"POSITIVE"<<endl;
        else if(neg%2==1)
        cout<<"NEGATIVE"<<endl;
        else
        cout<<"POSITIVE"<<endl;
    }

    return 0;
}