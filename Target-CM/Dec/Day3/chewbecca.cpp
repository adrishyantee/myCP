    #include <bits/stdc++.h>
    using namespace std;

    int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    string s; cin>>s;
    int i;
    for(i=s.size()-1;i>=0;i--){
        if(i==0 && (s[i]<'4' || s[i]=='9')  )
        break;
        if(s[i] >'4'){
        s[i]= (char)((int)'9' - (int)s[i])+'0';
        }
    }
    if(i==0)
    cout<<s<<endl;
    else 
    cout<<s<<endl;

    return 0;
    }