/*
http://codeforces.com/problemset/problem/744/A

You are looking at Silent Coders Code*/

#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define VISITED 1
#define UNVISITED 0
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef long long int lli;

vi g;
vpii adj[1000];
vi visited;

void dfs(int u,int &cnt){
    cnt++;
    visited[u]=VISITED;
    for(int i=0;i<adj[u].size();i++){
        pii v=adj[u][i];
        if(visited[v.first]==UNVISITED)
            dfs(v.first,cnt);
    }
}

int main(){
	ios::sync_with_stdio(false);
	int n,m,k,u,v,c=0,mx=0,done=0,ans=0,last=0;
	cin>>n>>m>>k;
	visited.assign(n,UNVISITED);
	for(int i=0,p=0;i<k;i++){
        cin>>p;
        p--;
        g.push_back(p);
	}
	for(int i=0;i<m;i++){
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(make_pair(v,0));
        adj[v].push_back(make_pair(u,0));
	}
	for(int i=0;i<k;i++){
        c=0;
        dfs(g[i],c);
        last+=(c*(c-1))/2;
        mx=max(mx,c);
        done+=c;
	}
	ans=(n-done);
	ans=(ans*(ans-1))/2+(ans*mx);
	c=0;
	for(int i=0;i<n;i++){
        c+=adj[i].size();
	}
	c/=2;
	ans+=last;
	ans-=c;
	cout<<ans<<endl;
	return 0;
}

