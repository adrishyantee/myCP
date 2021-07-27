#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int n; cin>>n;
        vector<vector<int>> a(n, vector<int>(5));

        for(int i = 0;i<n;i++){
        for(int j= 0;j<5;j++){
        cin>>a[i][j];
        }
        }

        if(n == 1){
        cout<<1<<endl;
        continue;
        }

        vector<unordered_map<int,int>> res (n);
        int flag=0;
        for(int i=0;i<n-1;i++){
            for(int k=i+1;k<n;k++){
                 int j=4, count = 0,acount=0;
                    while(j>=0){
                    if(a[i][j]<a[k][j])
                    count++;
                    else if(a[i][j]>a[k][j])
                    acount++;
                      j--;
                    }
                    if(count>=3){
                    res[i].insert({k,1});
                    }
                    if(acount>=3){
                    res[k].insert({i,1});
                    }

                    if(res[i].size()== n-1){
                    flag = 1;
                    cout<<i+1<<endl;
                    break;
                    }

                    if(res[k].size()== n-1){
                    flag = 1;
                    cout<<k+1<<endl;
                    break;
                    }
             }
        }

    if(flag == 0)
        cout << -1 <<endl;
    }
    return 0;
}