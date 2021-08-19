#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[1000], b[1000], c[1001] = {0};
    cin>>n;
    int i=0;
    while(n--)
    {
        cin>>a[i]>>b[i];
        c[b[i]] ++;
        i++;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        c[b[i]] --;
        if (c[a[i]] == 0)
        {
            count++;
        }
        c[b[i]] ++;
    }
    cout<<count<<endl;
    return 0;
}