#include <bits/stdc++.h>
typedef long long ll;
#define MAX 100000
using namespace std;

vector<int> findIntersection(int intervals[][2], int N)
{
    // First interval
    int l = intervals[0][0];
    int r = intervals[0][1];
 
    // Check rest of the intervals and find the intersection
    for (int i = 1; i < N; i++) {
 
        // If no intersection exists
        if (intervals[i][0] > r || intervals[i][1] < l) {
            return {-1,-1};
        }
 
        // Else update the intersection
        else {
            l = max(l, intervals[i][0]);
            r = min(r, intervals[i][1]);
        }
    }
    return {l,r};
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;cin>>T;

    for(int t=1;t<=T;t++){

        ll n,c;
        cin>>n>>c;

        ll maxcuts=0;
        int intervals[n][2];
        for(int i =0;i<n;i++){
            cin>>intervals[i][0];
            cin>>intervals[i][1];
        }

       vector<int> res = findIntersection(intervals,n);

       if(res[0]!=-1 && res[1]!=-1){
           if(res[1]-res[0]>c)
           maxcuts=c;
       }


        for(int i=0;i<n;i++){
            if(intervals[i][0]<res[0])
            maxcuts++;
            if(intervals[i][1]>res[1])
            maxcuts++;   
        }

        
       
        cout<<"Case #"<<t<<": "<<maxcuts<<endl;
    }
    return 0;
}