#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    ll t; cin>>t;

    while(t--){

    ll n,m,r,c; cin>>n>>m>>r>>c;

    vector<vector<char>> v( n,vector<char> (m));
    ll cnt=0;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]=='B')
            cnt++;
        }
    }

    if(cnt==0){
        cout<<-1<<endl;
        continue;
    }
    if(v[r-1][c-1]=='B'){
          cout<<0<<endl;
        continue;
    }

    ll flag=0;

    for(ll i=0;i<n;i++){
        if(v[i][c-1]=='B')
        {
            flag=1;
            break;
        }
    }

    if(flag==1){
              cout<<1<<endl;
        continue;  
    }


        for(ll i=0;i<m;i++){
        if(v[r-1][i]=='B')
        {
            flag=1;
            break;
        }
    }

       if(flag==1)
              cout<<1<<endl;
      else
      cout<<2<<endl;
      

    }
    return 0;
}


    

