/* You are looking at Silent Coders Code*/

#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define UNVISITED 0
#define VISITED 1
#define EXPLORED 2
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef long long int lli;
vi dfs_state;
vi dfs_parent;

void graphCheck(int u,vector< vpii > &adj){
    dfs_state[u]=EXPLORED;
    for(int i=0;i<adj[u].size();i++){
        pii v=adj[u][i];
        if(dfs_state[v.first]==UNVISITED){ //Explored-> Unvisited
            dfs_parent[v.first]=u;//u is parent of v
            graphCheck(v.first,adj);
        }
        else if(dfs_state[v.first]==EXPLORED){
            if(dfs_parent[u]==v.first){
                //Bidirectional
            }
            else{
                //GraphCyclic
            }
        }
        else if(dfs_state[v.first]==VISITED){
            //Forward/CrossEdge
        }
    }
    dfs_state[u]=VISITED;
}
int main(){
	ios::sync_with_stdio(false);
	int n;//number of vertices
	dfs_state.assign(n,UNVISITED);
	dfs_parent.assign(n,0);
	vector< vpii > adj(n);
	return 0;
}
