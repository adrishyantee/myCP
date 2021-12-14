#include<bits/stdc++.h>
 
using namespace std;
 
int n;
string s;
 
int main(){
    cin >> n >> s;
    int cnt1 = (n - 11) / 2;
    int cnt2 = cnt1;
    string res = "";
    for(int i = 0; i < n; ++i){
        if(s[i] == '8'){
            if(cnt1 > 0) 
            --cnt1;
            else
            res += s[i];
        }
        else{
            if(cnt2 > 0)
            --cnt2;
            else 
            res += s[i];
        }
    }
    
    if(res[0] == '8') 
    cout << "YES\n";
    else 
    cout << "NO\n";
	return 0;
}
