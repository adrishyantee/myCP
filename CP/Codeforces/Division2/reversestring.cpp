#include <bits/stdc++.h>
using namespace std;

vector<int> fun1(string s, string t){
    vector<int> v;
    int i=0;
    for(auto c:s){
        if(t[0]==c)
        v.push_back(i);
        i++;
    }
    return v;
}

bool fun2(string s, int ind, string t){
    int last=s.size()-1;
    for(int i=1;i<t.size()-1;i++){
        if(ind>0 && s[ind-1]==t[i])
        ind--;
        else if(ind<last && s[ind + 1]==t[i])
        ind++;
        else
        return false;
    }
    return true;
}
 
int main()
{
    int q; cin>>q;
    while(q--){
        string s, t;
        cin>>s>>t;
    vector<int> lst = fun1(s,t);
    string sol = "NO";
     for(auto i: lst){
         if(fun2(s,i,t)){
         sol="YES";
         break;
         }
     }  
     cout<<sol<<endl;
 
    }
	return 0;
}