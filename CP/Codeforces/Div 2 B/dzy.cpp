#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    string s;
    cin>>s;

    int k ; cin>>k;
    int res=0;

    vector<int> a(26,0);

    for(int j =0;j <26 ;j++)
    cin>>a[j];

    for(int i = 0;i<s.size();i++){

        res+= (i+1)* a[(int)(s[i]-'a')];
    }

    int m = *max_element(a.begin(),a.end());
    for(int l = s.size()+1;l<=(s.size()+k);l++)
    res+=l * m;
    cout<<res<<endl;
    return 0;
}