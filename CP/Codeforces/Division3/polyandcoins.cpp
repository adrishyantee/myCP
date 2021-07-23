#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n%3==0)
        cout<<(int)n/3<<" "<<(int)n/3<<endl;
        else{
        // long double s = (long double)n/3.0;
        long int x =round(n/3);
        long int y =round((n-x)/2.0);
        if(x*2+y==n)
        cout<<y<<" "<<x<<endl;
        else
        cout<<x<<" "<<y<<endl;
        }
        }
    return 0;
}