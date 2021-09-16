#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v(9);
    for(int i =0;i<9;i++){
        cin>>v[i];
    }

    int row1 = v[1]+v[2];
        int row2 = v[3]+v[5];
            int row3 = v[6]+v[7];

    v[0]=(row2+row3-row1)/2;
       v[4]=(row1+row3-row2)/2;
          v[8]=(row2+row1-row3)/2;

    for(int i =0;i<9;i++){
         if(i%3==0 && i!=0)
         cout<<endl;
         cout<<v[i]<<" "; 
    }
    return 0;
}

