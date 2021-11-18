#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


void minDistance(int t,int n, int k, vector<vector<int>>& point)
{
    // Sorting points in all k dimension
    for (int i = 0; i < k; ++i)
        sort(point[i].begin(), point[i].end());
 
    cout<<"Case #"<<t+1<<": ";
    // Output the required k points
    for (int i = 0; i < k; ++i)
        cout << point[i][(ceil((double)n / 2) - 1)] << " ";
}

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll t;
    cin>>t;
    for(int i=0;i<t;i++){
        int k;
        cin>>k;
        int ans=0;
        vector<vector<int> > point;
        while(k--){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            point.push_back({x1,y1});
            point.push_back({x2,y2});
            point.push_back({x1,y2});
            point.push_back({x2,y1});  
        }
         minDistance(i,4,2,point);
            cout<<endl;
    }
    return 0;
}