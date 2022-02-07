#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
typedef pair<int, int> iPair;

void addEdge(vector <pair<int, int> > adj[], int u,
                                     int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}
void shortestPath(vector<pair<int,int> > adj[], int V, int src, vector<pair<long, long>> val)
{
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
    vector<int> dist(V, INF);
    pq.push(make_pair(0, src));
    dist[src] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto x : adj[u])
        {
            int v = x.first;
            int weight = x.second * val[u].first + val[u].second;
            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    for (int i = 1; i < V; ++i){
        cout<<dist[i]<<endl;
    }
}

int main()
{
	int V; cin>>V;
    vector<iPair > adj[V];

    vector<pair<long, long>> val(V);
    for(int i=0;i<V-1;i++){
        int a,b,c;
        cin>>a>>b>>c;
        addEdge(adj,a-1,b-1,c);

    }
    for(int i=0;i<V;i++){
        long c,r; cin>>c>>r;
        val[i]=make_pair(c,r);
    }
    shortestPath(adj,V, 0, val);

	return 0;
}
