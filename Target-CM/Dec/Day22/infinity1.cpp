#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool vowel(char a){
    return (a=='a' || a=='e' ||a=='i' || a=='o' || a=='u');
}
int count (char a, char b){
    if((vowel(a) && vowel(b)) || (!(vowel(a)) && !(vowel(b))))
    return 2;
    else 
    return 1;
}

int main(){
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int cnt=0;
        vector<int> fre(26,0);

        string a,b; cin>>a>>b;

        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(a[i]=='?' || b[i]=='?'){
                        if(a[i]!='?'){
                            fre[a[i]-'a']++;
                        }
                        else
                            fre[b[i]-'a']++;
                    }
                else
                cnt+=count(a[i],b[i]);
            }
        }

        int c1 = INT_MAX;
        int vc=0, cc=0;
        for (int i = 0; i < 26; i++)
        {
            if(vowel((char)(i+'a'))){
                vc+=fre[i];
            }
            else{
                cc+=fre[i];
            }
        }

    for(int i=0;i<26;i++){
            if(vowel((char)(i+'a'))){
                c1=min(c1,2*(vc-fre[i])+cc);
            }
            else
                c1=min(c1,2*(cc-fre[i])+vc);
        }
        if(c1!=INT_MAX)
        cnt+=c1;
              
        cout<<cnt<<endl;
    }
    return 0;
}