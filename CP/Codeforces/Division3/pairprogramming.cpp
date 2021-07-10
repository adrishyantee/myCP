#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    
    while(t--){

        int k,n,m;
        cin>>k>>m>>n;

        vector<int> a(n);
        vector<int> b(m);

        for(int i =0;i<n;i++){
           cin>> a[i];
        }
        for(int i =0;i<m;i++){
           cin>>b[i]; 
        }

        vector<int> seq;

        int lines =k;
        int i=0,j=0;
        int curLine;
        bool failed = false;

        while(i<n && j<m){

            curLine = -1;
            if(a[i]==0){
                seq.push_back(0);
                lines++;
                i++;
                continue;
            }
            else if(b[j]==0){
                seq.push_back(0);
                lines++;
                j++;
                continue;
            }
            //
            else if(a[i]<b[j]){
                curLine=a[i];
                i++;
            }
            else{
                curLine=b[j];
                j++;
            }


            if(curLine<=lines){
                seq.push_back(curLine);
            }
            else{
                failed=true;
                break;
            }
        }


        while(i<n){
            if(a[i]==0){
                lines++;
                seq.push_back(0);
            }
            else if(a[i]<=lines){
                seq.push_back(a[i]);
            }
            else{
                failed=true;
                break;
            }
            i++;
        }
         while(j<m){
            if(b[j]==0){
                lines++;
                seq.push_back(0);
            }
            else if(b[j]<=lines){
                seq.push_back(b[j]);
            }
            else{
                failed=true;
                break;
            }
            j++;
        }
        if(failed){
            cout<<-1<<endl;
            continue;
        }
        else{
        for(auto i:seq)
        cout<<i<<" ";

        cout<<endl;
        }
    }
    return 0;
}