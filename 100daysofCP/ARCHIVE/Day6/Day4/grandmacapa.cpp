#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int n;
        cin >> n >> s;

        int ans = INT_MAX;

        for (int i= 0; i< 26;i++) {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r) {
                if (s[l] == s[r]) {
                    l++, r--;
                }
                else if (s[l] == char('a' + i)) {
                    cnt++, l++;
                }
                else if (s[r] == char('a' + i)) {
                    cnt++, r--;
                }
                else {
                    cnt = INT_MAX;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == INT_MAX) ans = -1;
        cout << ans << '\n';
    }
    return 0;
}