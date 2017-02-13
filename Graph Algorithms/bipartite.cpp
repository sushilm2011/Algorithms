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

bool isBipartite(int u,int n,vector< vpii > &adj){
    queue<int> q;
    vi color(n,INF);
    color[u]=0;
    q.push(u);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            pii v=adj[u][i];
            if(color[v.first]==INF){
                q.push(v.first);
                color[v.first]=1-color[u];
            }else{
                return false;
            }
        }
    }
    return true;

}

int main(){
	ios::sync_with_stdio(false);
	return 0;
}
