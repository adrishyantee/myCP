#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t; cin>>t;
    while(t--){
    ll n, a ,b;
    cin>>n>>a>>b;
    if(a+b>n-2)
    cout<<-1<<endl;
    else if(abs(a-b)>1)
    cout<<-1<<endl;
    else{
    vector<ll> arr(n,0);
    if(a>b){
        ll j=n;
        for(ll i=1;i<n-1;i+=2){
            if(a==0)
            break;
            arr[i]=j;
            j--;
            a--;
        } 
         ll f = j;
        j=1;
        for(ll i=2;i<n-1;i+=2){
            if(b==0)
            break;
            arr[i]=j;
            j++;
            b--;
        }

        for(ll i=0;i<n;i++){
            if(arr[i]==0){
            arr[i]=f;
            f--;
            }  
        }
    }
    else if(b>a){
        ll j=1;
        for(ll i=1;i<n-1;i+=2){
            if(b==0)
            break;
            arr[i]=j;
            j++;
            b--;
        }
        ll f=j;
        j=n;
        for(ll i=2;i<n-1;i+=2){
            if(a==0)
            break;
            arr[i]=j;
            j--;
            a--;
        }
        for(ll i=0;i<n;i++){
            if(arr[i]==0){
            arr[i]=f;
            f++;
            }  
        }
    }
    else {
         ll j=n;
        for(ll i=1;i<n-1;i+=2){
            if(a==0)
            break;
            arr[i]=j;
            j--;
            a--;
        }
        j=1;
        for(ll i=2;i<n-1;i+=2){
            if(b==0)
            break;
            arr[i]=j;
            j++;
            b--;
        }
        ll f = j;
        for(ll i=0;i<n;i++){
            if(arr[i]==0){
            arr[i]=f;
            f++;
            }  
        }
    }
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
    }
    return 0;
}

