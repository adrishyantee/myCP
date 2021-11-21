#include <bits/stdc++.h>
using namespace std;

int getPairsCount(vector<long long> arr, long long n, long long k)
{
	unordered_map<long long , long long> m;
	long long count = 0;
	for (long long i = 0; i < n; i++) {
		if (m.find(k - arr[i]) != m.end()) {
			count += m[k - arr[i]];
		}
		m[arr[i]]++;
	}
	return count;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long double sum=0;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        long double  m = ((long double)sum)/n;
        if(ceil(m*2) == floor(m*2))
        cout<<getPairsCount(arr,n,m*2)<<endl;
        else cout<<0<<endl;
    }
	return 0;
}
