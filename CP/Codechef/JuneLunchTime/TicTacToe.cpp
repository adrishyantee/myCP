#include<bits/stdc++.h>
using namespace std;

bool largestKSubmatrix(vector<vector<bool>> &a,int K, int Row,int Col)
{
	int dp[Row][Col];
	memset(dp, sizeof(dp), 0);

	int result = 0;
	for (int i = 0 ; i < Row ; i++)
	{
		for (int j = 0 ; j < Col ; j++)
		{
			if (i == 0 || j == 0)
				dp[i][j] = 1;

			else
			{
                if(a[i][j]==true){
				if (a[i][j] == a[i-1][j] &&
					a[i][j] == a[i][j-1] &&
					a[i][j] == a[i-1][j-1] )
					dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]),
									dp[i-1][j-1] ) + 1;
				else dp[i][j] = 1;
			}
            }
            

			// Update result at each (i,j)
			result = max(result, dp[i][j]);
		}
	}

	return result==K;
}

// Driven Program
int main()
{
    
    int T; cin>>T;
    while(T--){
        int N,M,K;
        cin>>N>>M>>K;

        int k=0,c=0;
       vector<vector<bool>> a(N+2, vector<bool>(M+2, false));
int x,y;
	    for(int i=0;i<N*M;i++){
                
                cin>>x>>y;
                a[x][y]=true;
                c++;


            if(k==0){
                if(largestKSubmatrix(a,K,N,M) && c%2!=0){
                    k++;
                    cout<<"Alice"<<endl;
                }
                else if(largestKSubmatrix(a,K,N,M) && c%2==0){
                    k++;
                    cout<<"Bob"<<endl;
                }
            }
     
        }
       if(k==0)
        cout<<"Draw"<<endl;
    }

	return 0;
}
