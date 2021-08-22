#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ll r, x,y, x1, y1;
    cin>>r>>x>>y>>x1>>y1;

    long double d = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
    ll res = ceil(d/(2.0*r));


    cout<<res<<endl;
    return 0;
}