#include <bits/stdc++.h>
using namespace std;

// bool check(string s){
//     unordered_map<char, int> mp;
//     for(int i=0;i<s.size();i++){
//         mp[s[i]]++;
//     }
//     if(mp.size()==1)
//     return true;
//     else
//     return false;
// }

int main(){
    int t; cin>>t;
    while(t--){
   
        int n; cin>>n;
        string s; cin>>s;
        double count=0.0;
        for(int i=1;i<n;i++){
            if(s[i-1]!=s[i])
            count+=0.5;
        }
    //     int done=0;
    //     for(int i=0;i<s.size();i++){
                      
    //         if(check(s)){
    //         break;
    //         }
    //         if(i>=1 && i<s.size() && s[i]==s[i-1])
    //         s[i-1]=s[i];
    //         if(i>=0 && i<s.size()-1 && s[i]==s[i+1])
    //         s[i+1]=s[i];
    //         count++;
            
        
        cout<<round(count)<<endl;

    }

    return 0;
}