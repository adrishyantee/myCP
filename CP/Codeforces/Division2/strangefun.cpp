#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
const int M=1e9+7;

int gcd(int x,int y){
	return y?gcd(y,x%y):x;
}
int LCM(int x,int y){
	return x/gcd(x,y)*y;
}
signed main(){
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		int G=1,ans=0;
		for(int i=1;G<=n;++i){
			G=LCM(G,i);
			if(G>n)break;
			ans+=n/G;
		}
		printf("%lld\n",(ans+n)%M);
	}
}