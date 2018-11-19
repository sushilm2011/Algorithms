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
	int N,E;//Nodes,Edges
	//Weight, u , v
	vector< pair< int,pii > > Edgelist;
	//Create Graph

	sort(Edgelist.begin(),Edgelist.end());
	int mst_sum=0
	UnionFind UF(N);
	for(int i=0;i<E;i++){
        pair< int,pii > first=Edgelist[i];
        if(!UF.isSameSet(first.second.first,first.second.second)){
            mst_sum+=first.first;
            UF.unionSet(first.second.first,first.second.second);
        }
	}
	return 0;
}

