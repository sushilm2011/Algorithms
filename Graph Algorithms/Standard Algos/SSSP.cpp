/* You are looking at Silent Coders Code*/

#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define VISITED 1
#define UNVISITED 0
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef long long int lli;
//priority_queue< pii > pq;

void Dijkstra()
int main(){
	ios::sync_with_stdio(false);
	vi dist(N,INF);
	dist[s]=0;//s=Source
	priority_queue< pii , vector< pii >, greater< pii > > pq;
	pr.push(make_pair(0,s));

	while(!pq.empty()){
        pii top = pq.top();
        pq.pop(); // greedy: get shortest unvisited vertex
        int d = front.first, u = front.second;
        if (d > dist[u]) continue; // this is a very important check
        for (int j = 0; j < adj[u].size(); j++) {
            pii v = adj[u][j]; // all outgoing edges from u
            if (dist[u] + v.second < dist[v.first]) {
                dist[v.first] = dist[u] + v.second; // relax operation
                pq.push(ii(dist[v.first], v.first));
            }
        }
    } // this variant can cause duplicate items in the priority queue
	return 0;
}

