#include <bits/stdc++.h>
using namespace std;
const long long limit = 1000000;
bool sieve[limit];

void isprime(){
      memset(sieve, true, sizeof(sieve));
        for(long long i = 2; i*i<=limit;i++){
        if(sieve[i]==true){
            for(long long j = (i*i);j<=limit;j+=i){
                sieve[j]=false;
            }
        }
    }
}

int main(){

    long long int n; cin>>n;
    isprime();
    vector<long long int> arr(n);
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
        if(((long long int)sqrt(arr[i])*(long long int)sqrt(arr[i])==arr[i] && sieve[(long long int)sqrt(arr[i])]) && arr[i]!=1 && arr[i!=0])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;

}