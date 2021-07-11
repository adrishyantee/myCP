#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    
    while(t--){

        int n; cin>>n;
        vector<int> a(n,0), b(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        if(a==b){
        cout<<0<<endl;
        continue;
        }

        vector<pair<int,int>> s;
        int sum=0;
        for(int i = 0;i<n;i++){
            s.push_back(make_pair((b[i]-a[i]),i));
            sum+=b[i]-a[i];
         } 

         if(sum!=0){
             cout<<-1<<endl;
             continue;
         }

        sort(s.begin(), s.end());

        vector<pair<int,int>> res;
         int i=0,j=n-1;
         while(i<j){
             if(s[i].first<0 && s[j].first>0){
                 res.push_back(make_pair(s[i].second,s[j].second));

                 s[i].first++;
                 s[j].first--;
             }

            else {
                if(s[i].first==0)
                i++;
                if(s[j].first==0)
                j--;
            }

            //      if(abs(s[i].first)>s[j].first)
            //      {
            //          s[i].first+=s[j].first;
            //          s[j].first=0;
            //      }
            //     if(abs(s[i].first)<s[j].first)
            //      {
            //          s[j].first+=s[i].first;
            //          s[i].first=0;
            //      }
            //      else{
            //      s[i].first=0;
            //      s[j].first=0;
            //      }
            //  }
            //  if(s[i].first == 0){
            //      i++;
            //  }
            //  if(s[j].first==0){
            //     j++;
            //  }
         }
         cout<<res.size()<<endl;
         for(auto i:res){
             cout<<i.first+1<<" "<<i.second+1<<endl;
         }
        }
    return 0;
}
