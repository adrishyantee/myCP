#include<bits/stdc++.h>
using namespace std;

using namespace std;


bool check(int x){
    int d=0,ans=0;
    unordered_map<int,bool> mp;
    while(x>0){
        d=x%10;
        if(mp.find(d)!=mp.end())
        return false;
        else
        mp.insert({d,true});
        x=x/10;
    }
    return true;
}
int main(){
    int y; cin>>y;

    y=y+1;

    while(!check(y))
    y++;

    cout<<y<<endl;
    return 0;
}