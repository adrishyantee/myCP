#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;


int findmin(long long n)
{
    if(n==1)
    return 2;
    if(n==2)
    return 3;

int i=2;
    while(i>=0){
    if(n%i!=0)
    return i;
    i++;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        long long n;
        cin>>n;
        int sum=0;

    for(int i=1;i<=n;i++){
        sum = findmin(i);
    }
    cout<<sum%M<<endl;
    }
    return 0;
}