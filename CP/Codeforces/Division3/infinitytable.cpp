#include <bits/stdc++.h>
using namespace std;



long long int nextPerfectSquare(long long int N)
{
    
    long long int nextN = floor(sqrt(N)) + 1;
    if((long long int)sqrt(N)*(long long int)sqrt(N)==N)
    return N;
 
    return nextN * nextN;
}
 
    int main()
    {
        int t;
        cin>>t;
        while(t--){
            long long int k; cin>>k;
            if(nextPerfectSquare(k)==k)
            cout<<(long long int)(sqrt(k))<<" "<<1<<endl;

            else{
            long long int s = nextPerfectSquare(k);
            long long int s1 = s - (sqrt(s)-1);
            long long int i=sqrt(s);
            if(s1>k && k>=((i-1)*(i-1)+1))
            cout<<i-abs(s1-k)<<" "<<i<<endl;
            else if(k==s1)
            cout<<i<<" "<<i<<endl;
            else if(s1<k && k<i*i)
            cout<<i<<" "<<i-abs(s1-k)<<endl;
            }
        }
        return 0;

    }