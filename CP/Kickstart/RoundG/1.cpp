#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll t;
    cin>>t;
    for(int i=0;i<t;i++){
    string ans = "YES";
    ll n,d,c,m;
    cin>>n>>d>>c>>m;

    string s;
    cin>>s;
    int dog=0;
    unordered_map<char, int> mp;
    for(int j = 0;j<s.size();j++)
        mp[s[j]]++;
    

    for(int j = 0;j<s.size();j++){
        if(s[j]=='C'){
            if(c==0){
            ans="NO";
            break;
            }
            c--;
        }
        else
        {
            if(d==0){
            ans="NO";
            break;
            }
            dog++;
            d--;
            c+=m;
        }
    }

    if(mp['D']==dog)
    ans = "YES";
    cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
    return 0;
}