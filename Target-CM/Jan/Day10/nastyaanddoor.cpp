#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool pick(ll i, vector<ll>& v, ll l, ll r) {
    if (i == l || i == r) return 0;
    return v[i - 1] < v[i] && v[i] > v[i + 1];
}
int main(){

    ll t;cin>>t;
    while(t--){

    ll n,k;
    cin>>n>>k;
    
    vector<ll> v(n);

    for(ll &i:v)
    cin>>i;


    ll ans = -1, l = -1, r = -1, now = 0;
    for (ll i = 1; i + 1 < k; ++i) {
        if (pick(i, v, 0, k - 1)) 
        //find total peaks
        ++now;
    }
    // total peaks found now which subarray one to choose
    ans = now + 1, l = 0, r = k - 1;
    for (ll i = k; i < n; ++i) {
        if (pick(i - k + 1, v, i - k, i - 1))
         --now;//if not in our range delete
        if (pick(i - 1, v, i - k + 1, i)) 
        ++now;//else add
        if (now + 1 > ans) {
            ans = now + 1;
            l = i - k + 1;
            r = i;
        }
    }
    cout << ans << " " << l + 1 << "\n";
    // vector<pair<ll,ll>> peaks;

    // cin>>v[0]>>v[1]>>v[2];
    // ll i1 = 0, j=1, k1=2;
    // if(v[i1]<v[j] && v[j]>v[k1])
    // peaks.push_back({i1,k1});
    // for(ll i=3;i<n;i++){
    //     cin>>v[i];
    //     i1=j;
    //     j=k1;
    //     k1=i;
    //     if(v[i1]<v[j] && v[j]>v[k1])
    //     peaks.push_back({i1,k1});
    // }

    // if(peaks.size()==0)
    // {
    //     cout<<1<<" "<<1<<endl;
    //     continue;
    // }

    // ll maxcnt=1;
    // ll cnt=1;
    // ll l=peaks[0].first, left=l;
    // ll right=peaks[0].second;

    // for(ll i=1;i<peaks.size();i++){
    //     if((peaks[i].second-left+1)<=k){
    //         cnt++;
    //         right=peaks[i].second;
    //     }
    //     else{
    //     if(maxcnt<cnt){
    //         maxcnt=cnt;
    //         left=l;
    //     }
    //     cnt=0;
    //     l=peaks[i].first;
    //     }
    // }
    // if(maxcnt<cnt){
    //     maxcnt=cnt;
    //     left=l;
    // }
    // if((right-left+1)<=k)
    // left = left - (k-(right-left+1));
    // if(left<0)
    // left=0;
    // cout<<maxcnt+1<<" "<<left+1<<endl;
    
    }

    return 0;
}
