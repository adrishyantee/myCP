#include <bits/stdc++.h>
using namespace std;
bool isPower(int x, int y)
{
    // logarithm function to calculate value
    int res1 = log(y) / log(x);
    double res2 = log(y) / log(x); // Note : this is double
 
    // compare to the result1 or result2 both are equal
    return (res1 == res2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
      

        if(isPower(a,n))
        cout<<"Yes"<<endl;

        else if(isPower(a,n-b))
        cout<<"Yes"<<endl;

        else if((n%(1+b))==0 || isPower(a,n/(1+b)))
        cout<<"Yes"<<endl;

        else if((n-1)%b==0)
        cout<<"Yes"<<endl;

        else 
        cout<<"No"<<endl;
    }

    return 0;
}