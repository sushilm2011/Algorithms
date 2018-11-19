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

int main(){
	ios::sync_with_stdio(false);
	vi dist(N,INF);
	dist[s]=0;
	for(int i=0;i<N-1;i++){
        for(int u=0;u<N;u++){
            for(int j=0;j<adj[u].size();j++){
                pii v=adj[u][j];
                dist[v.first]=min(dist[v.first],dist[u]+v.second);
            }
        }
	}

	bool hasNegativeCycle=false;
    for (int u=0;u<N;u++){ // one more pass to check
        for (int j = 0; j <adj[u].size(); j++) {
            pii v = adj[u][j];
            if (dist[v.first] > dist[u] + v.second) // if this is still possible
                hasNegativeCycle = true; // then negative cycle exists!
            }
    }
    printf("Negative Cycle Exist? %s\n", hasNegativeCycle ? "Yes" : "No");
	return 0;
}

