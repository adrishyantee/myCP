#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n ;
    vector<int> a(n);
	int totsum = 0;
	for (int i = 0 ; i < n ; i++){ 
		cin >> a[i];
		totsum += a[i];
	}
	
	int sum0 = 0, sum1 = 0;
	for(int i = 1; i < n; i += 2){
		sum1 += a[i];
	}
	
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(i % 2)
			sum1 = totsum - sum0 - a[i]; 
		else
			sum0 = totsum - sum1 - a[i];
		
		if(sum0 == sum1)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
