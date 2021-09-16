#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int> v(n);

    int jump=0;
    cin>>v[0];
    jump=v[0]+1;



    for(int i=1;i<n;i++){
            cin>>v[i];
            jump+=abs(v[i]-v[i-1]);
            jump++;
            jump++;
    }
    cout<<jump<<endl;
    return 0;
}