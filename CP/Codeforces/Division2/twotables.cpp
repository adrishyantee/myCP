#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll t; cin>>t;
    while(t--){

        ll W,H,x1,y1,x2,y2,w,h;

        cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;

        ll mgpx , mgpy;
         
        mgpx = max(x1-0, W-x2);
        mgpy = max(y1-0, H-y2);


        ll reqx = w-mgpx;
        ll reqy = h-mgpy;

        ll ans =-2.0;
        ll maxgpx = W-x2 +x1-0;
         ll maxgpy = H-y2 +y1-0;



        


    }
    return 0;
    }
