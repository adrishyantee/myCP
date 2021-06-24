#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> arr;

    for(int i=1;i<=n;i++){
    int value;
    cin>>value;
    pair<int,int> k ={i,value};
    arr.push_back(k);
    }

    int k=0;
    pair<int,int>temp;

    while(k<n-1){

        if(arr[k].second>m){
            temp=arr[k];
            for(int i=k;i<n-1;i++)
            arr[i]=arr[i+1];

            arr[n-1]=temp;
            arr[n-1].second-=m;
        }
        else
        k++;
    }
    cout<<arr[n-1].first<<endl;
    return 0;
}