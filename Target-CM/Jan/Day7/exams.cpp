#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool compare(pair<int,int> i1, pair<int,int> i2)
{

    if(i1.first < i2.first)
    return true;
    else if(i1.first == i2.first && i1.second < i2.second)
    return true;
    else
    return false;
}

int main(){
    int n; cin>>n;
    vector<pair<int,int>> a (n);
    for(int i=0;i<n;i++)
    cin>>a[i].first>>a[i].second;


    sort(a.begin(),a.end(),compare);
    int lastdate=min(a[0].second,a[0].first);
    // cout<<lastdate<<endl;
    for(int i=1;i<n;i++){
        if(a[i].first>=lastdate && a[i].second>=lastdate)
        lastdate=min(a[i].first,a[i].second);
        else if(a[i].first>lastdate)
        lastdate = a[i].first;
        else if(a[i].second>lastdate)
        lastdate = a[i].second;

        // cout<<lastdate<<endl;
    }
    cout<<lastdate<<endl;
    return 0;
}
