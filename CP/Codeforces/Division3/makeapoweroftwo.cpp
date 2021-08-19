#include <bits/stdc++.h>
using namespace std;
const long long int  M = (long long int)2e18;

int main(){

    int t; cin>>t;

    while(t--){
    long long int n; cin>>n;
    long long int ans = INT_MAX;
    string n1 = to_string(n);
        for (long long int s = 1; s <= M; s *= 2){
            string s1 = to_string(s);
            
            long long int a = n1.size(), b = s1.size();
            long long int x=0 ,y=0,res=0;
            while(x<a && y<b){
                if(n1[x]==s1[y])
                    y++;
                else {
                    res++;
                }
                x++;
            }
            
             res+=(a-x)+(b-y);

            ans = min(ans, res);
        }
    cout<<ans<<endl;
    }
    return 0;
}