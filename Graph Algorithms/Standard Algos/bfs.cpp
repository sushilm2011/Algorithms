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

/*Parameters of bfs starting vertex, number of vertices, adjacency list*/
/* Returns distance*/
vi bfs(int u,int n,vector< vpii > &adj){
    vi distance(n,INF);
    distance[u]=0;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            pii v=adj[u][i];
            if(distance[v.first]==INF){
                distance[v.first]=distance[u]+1;
                q.push(v.first);
            }
        }
    }
    return distance;
}

int main(){
	ios::sync_with_stdio(false);
	int u,v,n,e;
	cin>>n>>e;//number of vertices and edges
	vector< vpii > adj(n);
	for(int i=0;i<e;i++){
        cin>>u>>v;
        u--;v--;//If input is starts from 1 else ignore
        /* For Undirected Graph But the bfs above works for both*/
        adj[u].push_back(make_pair(v,0));
        adj[v].push_back(make_pair(u,0));
	}
	vi distance=bfs(0,n,adj);
	for(int i=0;i<distance.size();i++){
        cout<<distance[i]<<" ";
	}
	return 0;
}
