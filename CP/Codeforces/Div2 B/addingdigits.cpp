#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int flag =0;
    for (int i = 0; i < 10; ++i)
    {
        if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s << endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout << -1 << endl;
    }
    return 0;
}