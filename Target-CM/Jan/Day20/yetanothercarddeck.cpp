#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q; cin>>n>>q;

    deque<int> q1,q2;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        q1.push_back(x);
    }

    vector<int> qu;

    for(int i=0;i<q;i++){
        int t; cin>>t;
        qu.push_back(t);
    }

    for(int i=0;i<q;i++){
        int t=qu[i];
        int cnt=0;

        while(q1.front()!=t){
            q2.push_back(q1.front());
            q1.pop_front();
            cnt++;
        }
        cout<<cnt+1<<" ";
        q1.pop_front();
        while(!q2.empty()){
            q1.push_front(q2.back());
            q2.pop_back();
        }
        q1.push_front(t);
    }
return 0;
}