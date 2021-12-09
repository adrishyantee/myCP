#include <bits/stdc++.h>
using namespace std;
int countPairs(vector<int> arr, int n) 
{ 
    int ans = 0; 
    for (int i = 0; i < n-1; i++) {
            if (arr[i] != arr[i+1]) 
                ans++; 
    }
    return ans; 
} 
int main(){
    int t; cin>>t;
    while (t--)
    {
        
        int n,k; cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];

        
 
        for(int l=1;l<=k;l++){
            vector<int> temp;
            for(int i=0;i<n;i++){
                if(arr[i]!=l)
                temp.push_back(arr[i]);
            }
            int ugly = countPairs(temp, temp.size());
             cout<<ugly<<" ";
        }
        //    int count=0; 
        //     int prev=-1,curr=-1;
        //     for(int j=0;j<n;j++){
        //         if(arr[j]!=l){
        //             curr=j;
        //             if(prev=-1)
        //             prev=curr;
        //             else if(arr[prev]!=arr[curr])
        //             count++;
        //             prev=curr;
        //         }
        //     }
        //     cout<<count<<" ";
        // }
        cout<<endl;
        
    }
    


    return 0;
}