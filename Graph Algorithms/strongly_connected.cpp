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
vi low,num,S,visited;
int cnt=0,numSCC=0;
void tarjanSCC(int u){
    low[u]=num[u]=cnt++;
    S.push_back(u);//BAsed on order of visits
    visited[u]=VISITED;
    for(int i=0;i<adj[u].size();i++){
        pii v=adj[u][i];
        if(num[v.first]==UNVISITED)
            tarjanSCC(v.first);
        if(visited[v.first])
            low[u]=min(low[u],low[v.first]);
    }
    if(low[u]==num[u]){
        numSCC++;
        while(1){
            int v=s.back();
            s.pop_back();
            visited[v]=0;
            if(v==u)
                break;
        }
    }
}
int main(){
	ios::sync_with_stdio(false);
	low.assign(N,0);
	visited.assign(N,0);
	num.assign(N,UNVISITED);
	return 0;
}

