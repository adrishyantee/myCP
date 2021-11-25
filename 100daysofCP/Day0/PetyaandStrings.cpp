#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    int ans =0;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        s1[i]=towlower(s1[i]);
        s2[i]=towlower(s2[i]);

        if(s1[i]!=s2[i]){
            ans=((int)(s1[i]-s2[i]) > 0 )? 1:-1;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}