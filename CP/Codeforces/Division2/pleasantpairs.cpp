#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        unordered_map <int,int> mp(n);
         int c=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
          
            // search in map
            for(int j=0;j<i;j++){
                if((i+j+2)%x==0){
                if(mp[(i+j+2)/x]==j){
                c++;
                }
                }
            }
            mp.insert({x,i});
        }
    cout<<c<<endl;
    }
    return 0;
}