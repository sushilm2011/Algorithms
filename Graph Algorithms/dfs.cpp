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
vi visited;

/* NOTE: Only if Graph is Connected */
void dfs(int u,vector< vpii > &adj){
    visited[u]=VISITED;
    for(int i=0;i<adj[u].size();i++){
        pii v = adj[u][i]; //As calling adj[u][j] every time is time consuming
        if(visited[v.first]==UNVISITED)
                dfs(v.first,adj);//visit all the vertex
    }//Explored all the vertices connected to u
}
int main(){
	ios::sync_with_stdio(false);
	int u,v,n,e;
	cin>>n>>e;//number of vertices and edges
	visited.assign(n,UNVISITED);
	vector< vpii > adj(n);
	for(int i=0;i<e;i++){
        cin>>u>>v;
        u--;v--;//If input is starts from 1 else ignore
        /* For Undirected Graph But the dfs above works for both*/
        adj[u].push_back(make_pair(v,0));
        adj[v].push_back(make_pair(u,0));
	}
	/* For Connected Components*/
	int cc=0;//Number of connected components
	for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i,adj);
            cc++;
        }
	}
	return 0;
}
