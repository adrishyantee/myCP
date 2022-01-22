#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        ll n,k; cin>>n>>k;
        priority_queue<ll> st;
        int i=0;
        while (n) {
        if(n&1){
        st.push((ll)pow(2,i));
        }
        i++;
        n >>= 1;
        }
    if(st.size()>k){
        cout<<"NO"<<endl;
    }
    else{
        while(st.size()<k && st.top()!=1){
            ll top = st.top();
            if(top>1){
            st.pop();
            st.push(top/2);
            st.push(top/2);
            }
            if(st.size()==k)
            break;
        }

        if(st.size()==k){
        cout<<"YES"<<endl;
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}