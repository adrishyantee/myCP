#include <bits/stdc++.h>
using namespace std;

int main(){
    int bn,gn;
    cin>>bn;
    vector<int> b(bn);
    for(int i=0;i<bn;i++)
    {
        cin>>b[i];

    }
    cin>>gn;
    vector<int> g(gn);
    for(int i=0;i<gn;i++)
    {
        cin>>g[i];

    }
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());

    int i=0,j=0,count=0;
    while(i<bn && j<gn){
        if(abs(b[i]-g[j])<=1)
        {
            i++;
            j++;
            count++;

        }
        else if(b[i]-g[j]>0){
            j++;

        }
        else if(b[i]-g[j]<0){
            i++;
            
        }

    }
    cout<<count<<endl;
    return 0;
}