#include<bits/stdc++.h>
#define int long long
#define p pair<int, int>
#define endl '\n'
const int INF = 1000000001;
 
using namespace std;
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int q = 0; q < n; q++){
        cin >> a[q];
    }
    sort(a.begin(), a.end());
    vector<int> dif;
    for (int q = 1; q < n; q++){
        dif.push_back(a[q]-a[q-1]);
    }
    sort(dif.rbegin(), dif.rend());
    while (!dif.empty()){
        int need = (dif.back()+x-1)/x-1;
        if (need > k){
            break;
        }
        k -= max(0LL, need);
        dif.pop_back();
    }
    cout << dif.size()+1 << endl;
    return 0;
}