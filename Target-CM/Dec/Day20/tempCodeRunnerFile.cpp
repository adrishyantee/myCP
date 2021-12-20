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
        
        if((a.size()==s.size() && a[0]>s[0]) || (a.size()>s.size()))
        {
            cout<<-1<<endl;
            continue;
        }

        string b="";
        int flag=0;
        int i=a.size()-1,j=s.size()-1;
        while(i>=0 && j>=0){
            
            if(s[j]>=a[i]){
                int sd = (int)(s[j]-'0');
                int ad = (int)(a[i]-'0');
                b=((char)( (sd - ad)+'0'))+b;
            }
            else{
                if(j>0)
                j--;
                else if(j==0)
                {
                    cout<<-1<<endl;
                    flag=1;
                    break;
                }
                int sd1 = (int)(s[j]-'0');
                int sd2 = (int)(s[j+1]-'0');
                int ad = (int)(a[i]-'0');
                int sd = ((sd1*10)+sd2);
                int val = (sd - ad);
                if(val>=10){
                flag=1;
                cout<<-1<<endl;
                break;
                }
                else
                b=((char)(val+'0'))+b;
            }
            i--; j--;
        }
        if(j==-1 && i>=0){
        cout<<-1<<endl;
        flag=1;
        }

        while(j>=0){
            b=s[j]+b;
            j--;
        }

        if(flag!=1){
        b=removeLeadingZeros(b);
        cout<<b<<endl;
        }
        }
        return 0;
    }
