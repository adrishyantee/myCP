#include<bits/stdc++.h>
using namespace std;

void Solve(){
	int n,m,k;

	cin>>n>>m>>k;
    if((n-1ll)*n>>1<m||m<n-1){
		cout<<"NO"<<endl;
        return;
	}
	if(n==1){
		if(k>1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}else if(m<(n-1ll)*n>>1){
		if(k>3){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}else if(k>2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		Solve();
	}
	return 0;
}