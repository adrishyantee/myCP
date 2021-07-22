#include <bits/stdc++.h>
using namespace std;


bool isTprime(long long int a){
    if(sqrt(a)*sqrt(a)!=a)
    return false;
    
    if (a <= 1)
        return false;
    for (long long int i = 2; i <sqrt(a); i++)
        if (a % i == 0)
            return false;
 
    return true;
}
int main(){

    int n; cin>>n;
    vector<long long int> arr(n);
    for(long long int i=0;i<n;i++)
    cin>>arr[i];

    for(long long int i=0;i<n;i++){

        if(isTprime(arr[i]))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }


    return 0;

}