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
vi done;
priority_queue< pii > pq;

void process(int u){
    done[u]=VISITED;
    for(int i=0;i<adj.size();i++){
        pii v=adj[u][i];
        if(!done[v.first])
            pq.push(make_pair(-v.second,-v.first));//weight then id
    }
}

int main(){
	ios::sync_with_stdio(false);
    int N,mst_sum,u,w;
	done.assign(N,UNVISITED);
	process(0);
	mst_sum=0;
	while(!pq.empty()){
        pii top=pq.top();
        pq.pop();
        u=-top.second;
        w=-top.first;
        if(!done[u]){
            mst_sum+=v;
            process(u);
        }
	}
	return 0;
}

