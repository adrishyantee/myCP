#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool checkap(ll a, ll b, ll c){
    if((b-a)==(c-b))
    return true;
    else
    return false;
}


int arithmetic(ll a, ll b, ll c, ll d, ll e, ll f, ll g, ll h, ll i){
    int count=0;
    if(checkap(a,b,c))
    count++;
    if(checkap(d,e,f))
    count++;
    if(checkap(g,h,i))
    count++;
    if(checkap(a,d,g))
    count++;
    if(checkap(b,e,h))
    count++;
    if(checkap(c,f,i))
    count++;
    if(checkap(a,e,i))
    count++;
    if(checkap(c,e,g))
    count++;


    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;cin>>T;

    for(int t=1;t<=T;t++){
        ll a,b,c,d,f,g,h,i;
        cin>>a>>b>>c>>d>>f>>g>>h>>i;
       
        ll m1,m2,m3,m4;
        m1=(a+i)/2;
        m2=(c+g)/2;
        m3=(b+h)/2;
        m4=(d+f)/2;
        int j1= arithmetic(a,b,c,d,m1,f,g,h,i);
        int j2 = arithmetic(a,b,c,d,m2,f,g,h,i);
        int j3 = arithmetic(a,b,c,d,m3,f,g,h,i);
        int j4 = arithmetic(a,b,c,d,m4,f,g,h,i);
        int res=0;
        res= max(res,max(j1,max(j2,max(j3,j4))));
        
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}