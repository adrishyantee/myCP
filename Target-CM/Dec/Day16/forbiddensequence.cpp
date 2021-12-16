#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string S,T;
        cin>>S>>T;
        int c1=0,c2=0,c3=0;

        sort(S.begin(),S.end());

        if(T != "abc")
        cout<<S<<endl;
        else{

        for(int i=0;i<S.size();i++){

            if(S[i]=='a')
            c1++;

            if(S[i]=='b' && c1>0){
            c2++;
            }

            if(S[i]=='c'&& c1>0 && c2>0){
                c3++;
            }
        }

            if(c1>0 && c2>0 && c3>0)
            {
                    int i=c1;
                    while(c3--){
                        S[i]='c';
                        i++;
                    }
                    while(c2--){
                        S[i]='b';
                        i++;
                    }
            }
        cout<<S<<endl;
        }
        }
    return 0;
}