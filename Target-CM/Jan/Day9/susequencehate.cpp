#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t; cin>>t;

    while(t--){

    string s; cin>>s;
    int n=s.size();

    int ones=0,zeros=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1')
        ones++;
        else
        zeros++;
        
    }
    int ans=min(zeros,ones);

    int doneones=0, donezeros=0;

    for(int i=0;i<n;i++){
    if(s[i]=='1')
        doneones++;
        else
        donezeros++;
    int ans1 = doneones+(zeros-donezeros);
    int ans2 = donezeros+(ones-doneones);
    ans=min(ans, min(ans1,ans2));
    }
    cout<<ans<<endl;
    }

    return 0;
}
