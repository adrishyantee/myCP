#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll  stoii(string str){
stringstream ss; 
ll num;
ss << str;
ss >> num;
return num;
}

string itos(ll val){
      ostringstream str1;
 
    // Sending a number as a stream into output
    // string
    str1 << val;
 
    // the str() converts number into string
    string str = str1.str();

    return str;
}
int main(){
    ll t; cin>>t;

    while(t--){
        string s="";
        cin>>s;

        string maxi="";
        ll flag=0;

        for(ll i=s.size()-1;i>0;i--){
            ll newval =(ll)(s[i]-'0')+(ll)(s[i-1]-'0');

            if(newval>9){
                s[i]=(char)(newval%10+'0');
                s[i-1]=(char)(newval/10+'0');
                flag=1;
                break;
            }
        }

        if(flag==1){
            cout<<s<<endl;
            continue;
        }
        else{
        ll val = (ll)(s[0]-'0')+(ll)(s[1]-'0');
        string s1=to_string(val);
        cout<<s1;
        for(ll i=2;i<s.size();i++)
        cout<<s[i];
        cout<<endl;
        }
    }

        
    return 0;
}