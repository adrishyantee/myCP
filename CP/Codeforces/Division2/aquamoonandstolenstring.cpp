#include <cstdio>
const int Maxn=1000000;
char s[Maxn+5];
char ans[Maxn+5];
int n,m;
void solve(){
    scanf("%d%d",&n,&m);
    n=(n<<1)-1;
    for(int i=1;i<=m;i++){
        ans[i]=0;
    }
    for(int i=1;i<=n;i++){
        scanf("%s",s+1);
        for(int j=1;j<=m;j++){
            ans[j]^=s[j];
        }
    }
    for(int i=1;i<=m;i++){
        putchar(ans[i]);
    }
    putchar('\n');
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        solve();
    }
	return 0;
}