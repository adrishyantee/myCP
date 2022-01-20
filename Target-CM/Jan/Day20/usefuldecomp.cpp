#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const int N = 1e5 + 2;
vector<vector<int>> g(N+1); 
vector <int> leafs;
 
void dfs(int v, int par)
{
    int deg = 0;
    for (int i: g[v])
    {
        if (i != par)
        {
            deg++;
            dfs(i, v);
        }
    }
    if (deg == 0)
    {
        leafs.push_back(v);
    }
}
 
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <n; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int root = 1;
    int cnt = 0;
    for (int i = 1; i <=n; i++)
    {
        if ((int)g[i].size()>2)
        {
            cnt++;
            root = i;
        }
    }
    if (cnt>1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout <<"Yes"<<endl;
        dfs(root, -1);
        cout <<leafs.size()<<endl;
        for (int i = 0; i < leafs.size(); i++)
        cout<<root<<" "<<leafs[i]<<endl;
    }
}