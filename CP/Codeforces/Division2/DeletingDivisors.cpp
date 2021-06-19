#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        //case 1
        if(n % 2 == 1){
            cout<<"Bob"<<endl;
            continue;
        }
        //case2
        int cnt = 0;
        while(n % 2 == 0){
            cnt++;
            n /= 2;
        }
        //case3
        if(n > 1){
            cout << "Alice\n";
        }else if(cnt % 2 == 0){
            cout << "Alice\n";
        }else cout << "Bob\n";
    }
}