#include <bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m; cin>>n>>m;

string a[n];
int y1=0,y2=0;
int minx=m,maxx=0;
int c=0; int s1=0,s2=0;

for(int i=0;i<n;i++){
    cin>>a[i];
    
    if (a[i].find('*') != std::string::npos){
    int idx = a[i].find_first_of('*');
    minx=min(idx,minx);
    int idy = a[i].find_last_of('*');
    maxx=max(idy,maxx);
        if(c==0){
        s1=i;
        c++;}

        s2=i;
    }
}

for(int i=s1;i<=s2;i++){
    for(int j=minx;j<=maxx;j++){
        cout<<a[i][j];
    }
    cout<<"\n";
   }
return 0;
}