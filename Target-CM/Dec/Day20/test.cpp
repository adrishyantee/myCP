#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<1<<endl;
    int j=1,k=5;
    for(int i=2;i<=5;i++){
        j+=k;
        int m=j,it=(5-i+1);
        while(m>=i){
            cout<<m<<" ";
            m-=it;
            it++;
        }
        cout<<endl;
         k--;
    }
    return 0;
   
}