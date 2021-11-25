#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i!=0)
        arr[i]=arr[i-1]+x;
        else
        arr[i]=x;
    }

    int m; 
    cin>>m;
    vector<int> q(m);

    for(int j=0;j<m;j++){
        cin>>q[j];
    }


    int it=0;
    for(int j=0;j<m;j++){
        it=0;
    while(it<n){
        if(q[j]>arr[it])
        it++;
        else
        break;
     }
     cout<<it+1<<endl;
    }
    return 0;

}