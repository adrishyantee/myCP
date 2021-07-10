#include <bits/stdc++.h>
using namespace std;

bool areSame(vector<long long> a,int n)
{
    unordered_map<long long, long long> m;//hash map to store the frequency od every
                             //element
     
    for(long long i=0;i<n;i++)
       m[a[i]]++;
      
    if(m.size()==1)
       return true;
    else
       return false;
}

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

vector<long long> findgcd(vector<long long> a){
    long long temp = a[0];
    for(long long i = 0;i<a.size()-1;i++){
        a[i]=gcd(a[i+1],a[i]);   
    }
    a[a.size()-1]=gcd(a[a.size()-1],temp);
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    
    while(t--){
        long long n; cin>>n;
        vector<long long> a(n); 
        for(long long i=0;i<n;i++)
        cin>>a[i];
        int count=0;
        while(!areSame(a,a.size())){
            count++;
            a=findgcd(a);
        }
        cout<<count<<endl;
    }
    return 0;
    }
