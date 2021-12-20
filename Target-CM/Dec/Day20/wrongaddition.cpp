#include <bits/stdc++.h>
using namespace std;
#define ll long long

string removeLeadingZeros(string str)
{
    const regex pattern("^0+(?!$)");
    str = regex_replace(str, pattern, "");
    return str;
}

int main(){
    int t; cin>>t;
    while(t--){
        string a,s; 
        cin>>a>>s;
        
        ll i = a.size()-1, j=s.size()-1;
        string b="";
        int flag=0;
        while(i>=0 && j>=0){
             ll sd = (ll)(s[j]-'0');
             ll ad = (ll)(a[i]-'0');
            if(sd>=ad){
                b=((char)( (sd - ad)+'0'))+b;
                i--,j--;
            }
            else{
                j--;
                ll sd1 = (ll)(s[j]-'0');
                sd = (sd1*10)+sd;
                ll val = (sd - ad);
                if(val>=10 || val <0){
                flag=1;
                break;
                }
                b=((char)(val+'0'))+b;
                i--; j--;
            }
        }

        if(flag==1)
        {
            cout<<-1<<endl;
            continue;
        }

        if(i>=0){
        flag=1;
        }

        if(flag==1)
        {
            cout<<-1<<endl;
            continue;
        }

        while(j>=0){
            b=s[j]+b;
            j--;
        }

        if(flag!=1){
        b=removeLeadingZeros(b);
        cout<<b<<endl;
        }
        else
        cout<<-1<<endl;
        }
        return 0;
    }
