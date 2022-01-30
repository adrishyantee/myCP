#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int x1=s.find("AB");
    int x2=s.find("BA",x1+2);
    int y1=s.find("BA");
    int y2=s.find("AB",y1+2);
   if((x1!=-1 && x2!=-1)  || (y1!=-1 && y2!=-1)){
    cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
    return 0;
}