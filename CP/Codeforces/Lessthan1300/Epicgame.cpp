#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}


int main(){

    int a,b,n; cin>>a>>b>>n;
    int c=1;
    while(n>0){

        if(c%2!=0){
        int val = gcd (a,n);
        n=n-val;
        c++;
        }

        else{
        int val=gcd(b,n);
        n=n-val;
        c++;
        }
    }
    if(c%2==0)
    cout<<0<<endl;
    else
    cout<<1<<endl;
    return 0;
}