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

int maxRow=5,maxColumn=5;//bounds of adjacency matrix

/*Trick for Traversing 2D grid for all 8 directions in anticlockwise direction starting from South*/
int dr[]={1,1,0,-1,-1,-1,0,1};
int dc[]={0,1,1,1,0,-1,-1,-1};//S,SE,E,NE,N,NW,W,SW

//Returns the numbers of Connected Components
//Parameters: row,column,initial color, final color
int floodfill(int r,int c,char c1,char c2){
    if(r<0 || r>=maxRow || c<0 || c>=maxColumn)
        return 0;
    if(adjMat[r][c]!=c1)
        return 0;
    int ans=1;
    adjMat[r][c]=c2;
    for(int i=0;i<8;i++){
        ans+=floodfill(r+dr[i],c+dc[i],c1,c2);
    }
    return ans;
}
int main(){
	ios::sync_with_stdio(false);

	return 0;
}
