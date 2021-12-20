#include<bits/stdc++.h>
using namespace std;
#define long long ll
 
int main(){
    int t;
    cin>>t;
    while (t--){
    int q,d;
    cin>>q>>d;
    int lr = 10*d;
    vector<int> nums(q);
    for(int i=0;i<q;i++){
        int x;
        cin>>x;

        if(x>=lr){
        cout<<"YES"<<endl;
        continue;
        }
        int flag=0;
        for (int i=1; i <= 9; i++){
        int rem =x-(i*d);
        if (rem>=0 && rem%10 == 0){
            flag = 1;
            break;
            }
        }
        if(flag==1)
        cout<<"YES"<< endl;
        else
        cout<<"NO"<<endl;
    }
    }
    return 0;
}