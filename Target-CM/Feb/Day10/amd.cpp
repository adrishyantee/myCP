#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs_cycle(map<pair<ll, ll>, vector<pair<ll, ll>>> &mp, pair<ll,ll> u, pair<ll,ll>  p, vector<vector<ll>> color,
               vector<vector<ll>> vis, vector<vector<pair<ll,ll>>> par, ll &cyclenumber)
{
    if (color[u.first][u.second] == 2) {
        return;
    }

    if (color[u.first][u.second]  == 1) {
 
        cyclenumber++;
        pair<ll,ll> cur = p;
        vis[cur.first][cur.second] = cyclenumber;

        while (cur != u) {
            cur = par[cur.first][cur.second];
            vis[cur.first][cur.second] = cyclenumber;
        }
        return;
    }
    par[u.first][u.second] = p;
    color[u.first][u.second] = 1;

    for (auto v : mp[u]) {

        if (v == par[u.first][u.second]) {
            continue;
        }
        dfs_cycle(mp, v, u, color, vis, par, cyclenumber);
    }
    color[u.first][u.second] = 2;
}
int main()
{
    ll n, m;
    cin >> n >> m;
    ll q;
    cin >> q;
    vector<vector<ll>> arr(q, vector<ll>(4, 0));
    map<pair<ll, ll>, vector<pair<ll, ll>>> mp;

    for (ll i = 0; i < n; i++)
    {
        mp[{i + 1, 0}].push_back({i, 0});
        mp[{i, 0}].push_back({i + 1, 0});
        mp[{i, m}].push_back({i + 1, m});
        mp[{i + 1, m}].push_back({i, m});
    }
    for (ll i = 0; i < m; i++)
    {
        mp[{0, i}].push_back({0, i + 1});
        mp[{n, i}].push_back({n, i + 1});
        mp[{0, i + 1}].push_back({0, i});
        mp[{n, i + 1}].push_back({n, i});
    }
    for (ll i = 0; i < q; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
        ll x1 = arr[i][0];
        ll y1 = arr[i][1];
        ll x2 = arr[i][2];
        ll y2 = arr[i][3];

        if (x1 == x2)
        {
            x1 = x1 - 1;
            y1 = min(y1, y2);
            x2 = x1 + 1;
            y2 = y1;
        }
        else
        {
            y1 = y1 - 1;
            x1 = min(x1, x2);
            y2 = y1 + 1;
            x2 = x1;
        }
        mp[{x1, y1}].push_back({x2, y2});
        mp[{x2, y2}].push_back({x1, y1});
    }

    ll cyclenumber = 0;

    vector<vector<ll>> vis(n + 1, vector<ll>(m + 1)), color(n + 1, vector<ll>(m + 1));
    pair<ll,ll> v, u;
    vector<vector<pair<ll,ll>>> par(n + 1, vector<pair<ll,ll>>(m + 1,{0,0}));
    for(auto m1:mp){
        u=m1.first;
        v = m1.second[0];
        break;
    }
    dfs_cycle(mp, v, u, color, vis, par, cyclenumber);
    cout << cyclenumber << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;


// int counttotal(vector<int> &A, vector<int> B){

//     if(A==B)
//     return 
// }




// int power(long long x, unsigned int y, int p){
// int res =1;
// x=x%p;
// if(x==0)
// return 0;
// while(y>0){
//     if(y&1)
//     res=(res*x)%p;
//         y=y>>1;
//         x=(x*x)%p; 
//   }
//   return res;
// }
// int solve (int N, vector<int> A) {
//    long long val=0;

//    if(N==0)
//    return 1;

//    long long q = pow(15,N);


//    for()

   
// }

// int main() {

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T;
//     cin >> T;
//     for(int t_i = 0; t_i < T; t_i++)
//     {
//         int N;
//         cin >> N;
//         vector<int> A(6);
//         for(int i_A = 0; i_A < 6; i_A++)
//         {
//         	cin >> A[i_A];
//         }

//         int out_;
//         out_ = solve(N, A);
//         cout << out_;
//         cout << "\n";
//     }
// }