    #include <bits/stdc++.h>
    using namespace std;

long long Digits(long long x) {
	long long m1 = 10, m2 = 0;
	while(x > 0) {
		long long y = x % 10;
		x /= 10;
		m1 = min(m1, y);
		m2 = max(m2, y);
	}
	return m1 * m2;
}
    int main(){
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());


        int t; cin>>t;
        
        while(t--){
        long  long a,k; cin>>a>>k;
        if(k==1){
        cout<<a<<endl;
        continue;
        }
        long long sum=a;
        for(long long i=2;i<=k;i++){
            long long val = Digits(sum);
            if(val==0)
            break;
            sum+=val;
        }
        cout<<sum<<endl;
        }
        return 0;
    }