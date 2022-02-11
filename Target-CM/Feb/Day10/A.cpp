#include <bits/stdc++.h>
using namespace std;
#define ll long long
void DFS(vector<vector<ll>> &M, ll i, ll j, ll ROW,
         ll COL, ll parval, vector<vector<ll>> &vis)
{
    //Base condition
    //if i less than 0 or j less than 0 or i greater than ROW-1 or j greater than COL-  or if M[i][j] != 1 then we will simply return
    if (i < 0 || j < 0 || i > (ROW - 1) || j > (COL - 1) || M[i][j] != parval || vis[i][j]!=-1)
        return;

        vis[i][j]=1;
        DFS(M, i + 1, j, ROW, COL,parval, vis);     //right side traversal
        DFS(M, i - 1, j, ROW, COL,parval, vis);     //left side traversal
        DFS(M, i, j + 1, ROW, COL,parval, vis);     //upward side traversal
        DFS(M, i, j - 1, ROW, COL,parval, vis);     //downward side traversal
}

int countIslands(vector<vector<ll>> &M , vector<vector<ll>> &vis)
{
    ll ROW = M.size();
    ll COL = M[0].size();
    ll count = 0;
    for (ll i = 0; i < ROW; i++)
    {
        for (ll j = 0; j < COL; j++)
        {
            if(vis[i][j]==-1){
                vis[i][j]=1;
                ll parval = M[i][j];
                count++;
                DFS(M, i + 1, j, ROW, COL,parval, vis);     //right side traversal
                DFS(M, i - 1, j, ROW, COL,parval, vis);     //left side traversal
                DFS(M, i, j + 1, ROW, COL,parval, vis);     //upward side traversal
                DFS(M, i, j - 1, ROW, COL,parval, vis);     //downward side traversal
            }
           }
        }
    return count;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll q;
    cin >> q;
    vector<vector<ll>> arr(q, vector<ll>(4, 0));
    map<pair<pair<ll, ll>, pair<ll, ll>>, ll> mp;
    for (ll i = 0; i < q; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
        ll x1 = arr[i][0]-1;
        ll y1 = arr[i][1]-1;
        ll x2 = arr[i][2]-1;
        ll y2 = arr[i][3]-1;
        if (x1 == x2)
        {
            if (y1 > y2)
            {
                mp[{{x2, y2}, {x1, y1}}]++;
            }
            else
            {
                mp[{{x1, y1}, {x2, y2}}]++;
            }
        }
        else if (y1 == y2)
        {
            if (x1 > x2)
            {
                mp[{{x2, y2}, {x1, y1}}]++;
            }
            else
            {
                mp[{{x1, y1}, {x2, y2}}]++;
            }
        }
    }

    vector<vector<ll>> grid(n, vector<ll>(m, -1));

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    vector<ll> v = {-1, 0, +1, 0, 0, -1, 0, +1};

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x, y;
            for (ll k = 0; k < 8; k += 2)
            {
                x = i + v[k];
                y = j + v[k + 1];
                if (x >= 0 && y >= 0 && x < n && y < m)
                {

                    bool check;
                    if (y > j || x > i)
                    {
                        check = mp.find({{i, j}, {x, y}}) != mp.end();
                    }
                    else
                    {
                        check = mp.find({{x, y}, {i, j}}) != mp.end();
                    }

                    if (check)
                    {
                        if (grid[x][y] == -1 && grid[i][j] == -1)
                        {
                            grid[x][y] = 0;
                            grid[i][j] = 1;
                        }
                        else if (grid[x][y] != -1 && grid[i][j] == -1)
                        {
                            grid[i][j] = 1 - grid[x][y];
                        }
                        else if (grid[x][y] == -1 && grid[i][j] != -1)
                        {
                            grid[x][y] = 1 - grid[i][j];
                        }
                        else
                        {
                            // nothing to do
                        }
                    }
                    else
                    {
                        if (grid[x][y] == -1 && grid[i][j] == -1)
                        {
                            grid[x][y] = 0;
                            grid[i][j] = 0;
                        }
                        else if (grid[x][y] != -1 && grid[i][j] == -1)
                        {
                            grid[i][j] = grid[x][y];
                        }
                        else if (grid[x][y] == -1 && grid[i][j] != -1)
                        {
                            grid[x][y] = grid[i][j];
                        }
                        else
                        {
                            if (grid[i][j] != grid[x][y])
                                grid[x][y] = grid[i][j];
                            // to do something here
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<ll>> vis(n, vector<ll>(m, -1));

    cout<<countIslands(grid,vis)<<endl;

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    solve();
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}