#include <bits/stdc++.h>
using namespace std;



int main(){

    long long int n;
    cin>>n;


    unordered_map<int,int> mp;


    int c=0;
    // bool four=false, seven=false;
    
    while(n>0){
        int d = n%10;
        if(d==4 || d==7)
        c++;
        n=n/10;
    }

    int count =0;

        while(c>0){
        int d = c%10;
        if(d!=4 && d!=7)
        break;
        c=c/10;
        count++;
    }

    if(count!=0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;





    return 0;
}