#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t; cin>>t;

    while(t--){

        ll P; cin>>P;

        if(P%2==0)
        cout<<-1<<endl;

        else{
        P--;
        cout<<2<<" "<<P<<endl;
        }

    }
    return 0;
}