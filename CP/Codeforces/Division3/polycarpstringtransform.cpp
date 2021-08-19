#include <bits/stdc++.h>
using namespace std;

int main(){

    int q;cin>>q;

    while(q--){


        string t; cin>>t;
        set<char> s;
        string d ="";
        for(int i = t.length()-1;i>=0;i--){
            if(s.find(t[i])==s.end()){
            d=t[i]+d;
            s.insert(t[i]);
            }
        }
        
        unordered_map<char,int> mp;
        for(int i=0;i<t.length();i++)
        {
            if(mp.find(t[i])!=mp.end()){
                mp[t[i]]++;
            }
            else
                mp.insert({t[i],1});
        }
        int total =0;
        for(int j = 0;j<d.length();j++){
           total += mp[d[j]]/(j+1);
        }
       
       string str = t.substr(0,total);

        int i =0;
        string t1 = str;
        string str1 = str;
       while(str.size()>0 && i < d.length()){
           str.erase(remove(str.begin(),str.end(),d[i]),str.end());
           t1 += str;
           i++;
           }

       if(t1 == t){
           cout<<str1<< " "<<d<<endl;
       }
       else
       cout<<-1<<endl;
    }

    return 0;
}