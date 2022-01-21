#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solution() {

    string s;
    cin>>s;

    char op = s[0];
    char cl = s[s.size()-1];

    if(op == cl)
    {
        cout<<"NO"<<endl;
        return;
    }
    ll open1=0, open2=0;
    ll l=0;
    for(ll i=0;i<s.size();i++){
        ll val1 = open1;
        ll val2 = open2;

        if(s[i]==op){
        open1++;
        open2++;
        }
        else if(s[i]==cl){
        open1--;
        open2--;
        }
        else{
            open1++;
            open2--;
        }

        if(val1==0 && open1<0){
            open1=-100;
        }
        
        if(val2==0 && open2<0){
            open2=-100;
        }
    }
    if(open1==0 || open2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}

/* ========== YOUR CODE HERE ========= */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin>>t;
    while(t--) {
        solution();
    }

    return 0;
}