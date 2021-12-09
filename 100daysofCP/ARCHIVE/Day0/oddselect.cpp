#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr,int N, int K)
{
	int oddCount = 0, evenCount = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] % 2 == 0)
			evenCount++;
		else
			oddCount++;
	}
	if (evenCount == N
		|| (oddCount == N && K % 2 == 0)
		|| (K == N && oddCount % 2 == 0))
		return false;
	else
		return true;
}

// Driver code
int main()
{
    int t;cin>>t;
	while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    if (isPossible(arr, n,k))
		cout << "Yes"<<endl;
	else
		cout << "No" <<endl;
    }
	return 0;
}
