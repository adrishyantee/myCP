#include <bits/stdc++.h>
using namespace std;

int main(){


    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int n = abs(b-a)*2;
        if(n%2==0 && max(a,b)<=n)
        {
            if(c>n)
            cout<<-1<<endl;
            else if(c<n/2)
            cout<<n/2+c<<endl;
            else if(c==n/2)
            cout<<n<<endl;
            else if(c==n)
            cout<<n/2<<endl;
            else
            cout<<c-n/2<<endl;
        }
        else
        cout<<-1<<endl;





    }


    return 0;
}