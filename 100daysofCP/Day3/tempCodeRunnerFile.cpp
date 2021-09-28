#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main()
{
    ll t = 1;
    cin>>t;
 
    while (t--)
    {
        ll n;
        cin>>n;
        vl v(n);
        priority_queue<pair<ll,ll> > pq;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i])
            {
                pq.push({v[i],i} );
            }
        }
        vvl ans;
        while(pq.size()>1)
        {
            ll num1=pq.top().first;
            ll ind1=pq.top().second+1;
            pq.pop();
            ll num2=pq.top().first;
            ll ind2=pq.top().second+1;
            pq.pop();
            num1--;
            num2--;
            ans.push_back({ind1,ind2});
            if(num1>0)
            {
                pq.push({num1,ind1-1});
            }
            if(num2>0)
            {
                pq.push({num2,ind2-1});
            }
        }
        cout<<ans.size()<<'\n';
        for(auto itr:ans)
        {
            for(auto it:itr)
            {
                cout<<it<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}