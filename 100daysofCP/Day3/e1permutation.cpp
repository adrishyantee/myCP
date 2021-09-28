#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        deque<int> d;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            d.push_back(x);
        }
        deque<int> ans;
        int val = d.front();
        d.pop_front();
        ans.push_back(val);
        
        for(int i =1;i<n;i++){
            int check=ans.front();
            val=d.front();
            d.pop_front();
            if(val<check){
                ans.push_front(val);
            }
            else
            ans.push_back(val);
        }
        for(int i =0;i<n;i++){
            cout<<ans.at(i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}