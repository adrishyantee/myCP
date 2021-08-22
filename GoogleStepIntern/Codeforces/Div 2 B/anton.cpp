#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    string n;
    cin>>n;

    string temp =n;


    

    // unordered_map<int, vector<int>> mp;

    for(ll i =0;i<n.size();i++){
        int curr = (int)(n[i]-'0');
        int ld = (int)(n[n.size()-1]-'0');
        if(curr%2==0 && curr < ld){
            char t = n[i];
            n[i]=n[n.size()-1];
            n[n.size()-1]=t;
            cout<<n<<endl;
        return 0;
        }
      
    }
    for(ll i = n.size()-1;i>=0;i--){
        int curr = (int)(n[i]-'0');
        int ld = (int)(n[n.size()-1]-'0');
        if(curr%2==0){
            char t = n[i];
            n[i]=n[n.size()-1];
            n[n.size()-1]=t;
            cout<<n<<endl;
            return 0;
        }
        
    }
    if(n== temp)
    cout<<-1<<endl;

    // if(mp.empty()){
    // cout<<-1<<endl;
    // return 0;
    // }

    // ll maximum = 0;
    // for(auto i: mp){

    //      for(auto p:i.second){

    //          string temp = n;
    //          char t = temp[p];
    //          temp[p]=temp[temp.size()-1];
    //          temp[temp.size()-1]=t;

    //          ll num = stoi(temp);
    //          maximum = max(maximum, num);

    //      }
    // }
    return 0;

}