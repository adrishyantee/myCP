#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(vector<int> v){
    int sum=0;
    for(int i=0;i<v.size();i++)
    sum+=v[i];

    return sum;
}
int main(){
    int m,s;
    cin>>m>>s;

    vector<int> l(m,0), g(m,9);
    l[0]=1;
    int lsum = 1, hsum = m*9;
    bool flag = false;
    int j=m-1;

    if(m==1 && s==0)
    flag = true;
    
    if(lsum>s || s>hsum)
    flag = true;

    while(lsum<s && flag==false){
        if(lsum==s)
        break;
        else{
        l[j]++;
        lsum++;
        if(l[j]>9){
            l[j]=9;
            j--;
            l[j]++;
        }
      }
    }

    j=m-1;

    while(hsum>s  && flag==false){
        if(hsum==s)
        break;
        else{
        g[j]--;
        hsum--;
        if(g[j]<0){
            g[j]=0;
            j--;
            g[j]--;
        }
    }
    }
    if(!flag){
    for(int i=0;i<m;i++)
    cout<<l[i];
    cout<<" ";
    for(int i=0;i<m;i++)
    cout<<g[i];
    cout<<endl;
    }
    else{
        if(m==1 && s==0)
        cout<<0<<" "<<0<<endl;
        else
         cout<<-1<<" "<<-1<<endl;
    }
   
    return 0;
}